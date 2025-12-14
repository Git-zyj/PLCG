#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1028512213;
_Bool var_3 = (_Bool)0;
unsigned int var_8 = 3111186691U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 1073966414938536158LL;
signed char var_14 = (signed char)-115;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)23098;
long long int var_18 = -7055040055496481711LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
