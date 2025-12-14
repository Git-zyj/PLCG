#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60327;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1303056143U;
unsigned long long int var_6 = 14664942106674532526ULL;
unsigned long long int var_9 = 2936917386859667550ULL;
unsigned short var_12 = (unsigned short)49666;
unsigned short var_14 = (unsigned short)59034;
int zero = 0;
unsigned long long int var_16 = 16776283695725085326ULL;
int var_17 = 1447378579;
short var_18 = (short)16568;
int var_19 = -502020776;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
