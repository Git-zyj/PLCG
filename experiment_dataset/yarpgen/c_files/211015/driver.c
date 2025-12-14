#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3259241188U;
short var_1 = (short)-6992;
signed char var_5 = (signed char)-122;
unsigned int var_7 = 1012396117U;
unsigned long long int var_10 = 3031850622730318559ULL;
short var_11 = (short)9393;
unsigned char var_15 = (unsigned char)2;
int zero = 0;
short var_18 = (short)17902;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1173134442U;
long long int var_21 = 8604999469518600505LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
