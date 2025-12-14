#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1680752295;
unsigned int var_1 = 2469732555U;
unsigned char var_3 = (unsigned char)3;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 9488186428697662793ULL;
unsigned char var_7 = (unsigned char)106;
unsigned short var_8 = (unsigned short)50877;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)66;
unsigned int var_14 = 1411085667U;
unsigned long long int var_15 = 3822367945606595333ULL;
unsigned int var_16 = 4234899750U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
