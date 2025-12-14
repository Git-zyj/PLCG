#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 266039736U;
unsigned int var_1 = 384251183U;
unsigned long long int var_5 = 17257075660755826414ULL;
unsigned char var_8 = (unsigned char)106;
signed char var_12 = (signed char)-39;
unsigned int var_15 = 4155496139U;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_19 = 1421254628;
int var_20 = 1214639178;
unsigned short var_21 = (unsigned short)17419;
unsigned short var_22 = (unsigned short)29530;
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
