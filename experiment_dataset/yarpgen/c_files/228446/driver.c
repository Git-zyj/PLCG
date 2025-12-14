#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned char var_1 = (unsigned char)43;
int var_3 = -2026269123;
short var_4 = (short)8989;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)55810;
unsigned long long int var_10 = 12769707461043481903ULL;
int zero = 0;
unsigned long long int var_11 = 15234003380754408420ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 608869161;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 412255381U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
