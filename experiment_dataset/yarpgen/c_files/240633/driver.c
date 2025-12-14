#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
_Bool var_1 = (_Bool)0;
int var_3 = -584920315;
int var_7 = 49517130;
unsigned char var_11 = (unsigned char)49;
int zero = 0;
short var_19 = (short)19159;
long long int var_20 = 6500370506454129112LL;
signed char var_21 = (signed char)80;
unsigned long long int var_22 = 7867655047841334659ULL;
unsigned short var_23 = (unsigned short)35547;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
