#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4012302809U;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)16;
unsigned long long int var_5 = 3138248884758861231ULL;
unsigned long long int var_6 = 1807977303209880310ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = 4118379000397267957LL;
unsigned short var_9 = (unsigned short)22916;
unsigned short var_10 = (unsigned short)61027;
unsigned long long int var_11 = 15621300528760010982ULL;
int zero = 0;
signed char var_15 = (signed char)-127;
unsigned int var_16 = 3137164786U;
unsigned short var_17 = (unsigned short)7645;
void init() {
}

void checksum() {
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
