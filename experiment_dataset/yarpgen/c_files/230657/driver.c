#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24864;
int var_4 = 677430841;
signed char var_7 = (signed char)-17;
unsigned int var_8 = 3427218737U;
unsigned long long int var_10 = 16371097023537901219ULL;
int var_14 = 1968707129;
int zero = 0;
unsigned long long int var_19 = 8450194041811093283ULL;
unsigned int var_20 = 710548860U;
signed char var_21 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
