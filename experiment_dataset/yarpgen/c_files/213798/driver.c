#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2464;
unsigned int var_1 = 540944811U;
signed char var_2 = (signed char)-107;
long long int var_3 = -1129754525887888882LL;
signed char var_4 = (signed char)71;
signed char var_7 = (signed char)36;
signed char var_8 = (signed char)-85;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-53;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)60892;
signed char var_15 = (signed char)-33;
short var_16 = (short)-12098;
_Bool var_17 = (_Bool)0;
short var_18 = (short)23227;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
