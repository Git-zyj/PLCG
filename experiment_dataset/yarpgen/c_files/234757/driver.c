#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 1156353522691128560LL;
unsigned short var_13 = (unsigned short)39565;
short var_14 = (short)32693;
_Bool var_17 = (_Bool)1;
unsigned char var_19 = (unsigned char)22;
int zero = 0;
long long int var_20 = -7710256086871376987LL;
long long int var_21 = 8311194168221905201LL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)32764;
_Bool var_24 = (_Bool)1;
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
