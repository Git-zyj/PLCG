#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
int var_8 = 522234097;
int var_9 = -1561976867;
int var_12 = -1774832352;
int zero = 0;
signed char var_14 = (signed char)126;
unsigned long long int var_15 = 177630744623989540ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
