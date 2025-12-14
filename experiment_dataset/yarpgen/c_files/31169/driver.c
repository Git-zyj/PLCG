#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14656;
_Bool var_2 = (_Bool)0;
short var_4 = (short)21920;
unsigned short var_5 = (unsigned short)60342;
unsigned char var_10 = (unsigned char)89;
unsigned char var_11 = (unsigned char)200;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)199;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)79;
unsigned short var_20 = (unsigned short)53381;
unsigned int var_21 = 3664341649U;
long long int var_22 = 2473955874002913544LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
