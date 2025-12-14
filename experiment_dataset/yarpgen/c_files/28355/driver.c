#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1617999956;
unsigned long long int var_2 = 14034608522922858522ULL;
unsigned long long int var_6 = 14478427810349036012ULL;
signed char var_9 = (signed char)32;
int zero = 0;
unsigned char var_10 = (unsigned char)195;
unsigned int var_11 = 21250764U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
