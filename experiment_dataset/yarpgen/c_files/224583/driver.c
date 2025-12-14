#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3109225899254556219LL;
unsigned long long int var_6 = 1920868263101825064ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 443889535;
unsigned char var_11 = (unsigned char)87;
short var_14 = (short)32182;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3655941767223257962ULL;
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
