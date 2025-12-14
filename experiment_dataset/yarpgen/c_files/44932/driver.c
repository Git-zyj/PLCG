#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5890083260113066604ULL;
int var_1 = -464138656;
int var_2 = 1575736034;
unsigned int var_3 = 3111324632U;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)46;
unsigned char var_7 = (unsigned char)63;
unsigned short var_8 = (unsigned short)62214;
short var_11 = (short)-18064;
signed char var_12 = (signed char)14;
short var_13 = (short)-15372;
signed char var_14 = (signed char)118;
unsigned long long int var_15 = 4969490195310707223ULL;
int zero = 0;
unsigned int var_16 = 468955286U;
unsigned char var_17 = (unsigned char)60;
unsigned short var_18 = (unsigned short)43645;
unsigned int var_19 = 1916521454U;
int var_20 = -1702141177;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
