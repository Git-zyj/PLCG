#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)162;
unsigned int var_2 = 181584750U;
unsigned long long int var_4 = 4939363051850591873ULL;
int var_6 = 1641308683;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)62499;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)42716;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1850999499;
long long int var_19 = 9009677848558413123LL;
int var_20 = 477379968;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
