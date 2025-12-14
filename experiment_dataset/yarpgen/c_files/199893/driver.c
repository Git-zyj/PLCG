#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-109;
int var_6 = -1597133142;
signed char var_8 = (signed char)-126;
signed char var_9 = (signed char)-102;
signed char var_18 = (signed char)50;
int zero = 0;
unsigned long long int var_20 = 3804991832947077439ULL;
int var_21 = 1739287669;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
