#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1710390445;
_Bool var_11 = (_Bool)0;
long long int var_15 = -4831987014035709868LL;
long long int var_16 = 208010662588864910LL;
short var_17 = (short)-29871;
signed char var_19 = (signed char)118;
int zero = 0;
unsigned long long int var_20 = 18115218635423342103ULL;
unsigned char var_21 = (unsigned char)30;
unsigned int var_22 = 3717540242U;
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
