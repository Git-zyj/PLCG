#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3965767870734743585ULL;
long long int var_9 = -327325056889163344LL;
signed char var_10 = (signed char)-105;
unsigned long long int var_12 = 7288199832442370436ULL;
unsigned long long int var_14 = 12730117865518152889ULL;
long long int var_17 = 3790573961517842217LL;
long long int var_19 = 7579777148128958743LL;
int zero = 0;
unsigned char var_20 = (unsigned char)99;
unsigned int var_21 = 1818678614U;
unsigned char var_22 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
