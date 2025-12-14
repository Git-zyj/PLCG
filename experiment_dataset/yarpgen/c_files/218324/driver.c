#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5314;
unsigned short var_5 = (unsigned short)1822;
unsigned long long int var_7 = 3596373331176662259ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)44172;
unsigned long long int var_12 = 8029389066173585805ULL;
unsigned char var_13 = (unsigned char)103;
int zero = 0;
signed char var_14 = (signed char)-109;
unsigned int var_15 = 2444405464U;
unsigned int var_16 = 2591434491U;
signed char var_17 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
