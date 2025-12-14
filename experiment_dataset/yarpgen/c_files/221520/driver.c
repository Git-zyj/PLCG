#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3655436424U;
unsigned char var_2 = (unsigned char)133;
unsigned int var_4 = 2367721945U;
unsigned short var_7 = (unsigned short)34131;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1028585784U;
unsigned short var_13 = (unsigned short)60430;
int zero = 0;
long long int var_15 = 6516276877022018254LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)113;
long long int var_18 = 8390704748762607308LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
