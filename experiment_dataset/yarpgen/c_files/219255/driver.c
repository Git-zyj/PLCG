#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2914833393850079152ULL;
unsigned short var_3 = (unsigned short)9818;
unsigned short var_6 = (unsigned short)35649;
unsigned long long int var_8 = 6837794863202264980ULL;
unsigned short var_10 = (unsigned short)28130;
signed char var_11 = (signed char)124;
unsigned short var_14 = (unsigned short)44012;
int zero = 0;
int var_20 = 644776756;
signed char var_21 = (signed char)-11;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-115;
int var_24 = -1587919282;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
