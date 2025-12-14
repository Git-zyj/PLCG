#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41592;
unsigned long long int var_1 = 3343311307413263837ULL;
signed char var_3 = (signed char)60;
long long int var_7 = -2678811263965855460LL;
unsigned long long int var_8 = 3583789358107667296ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)34681;
_Bool var_12 = (_Bool)1;
short var_14 = (short)-4608;
unsigned long long int var_15 = 6999582533287815227ULL;
short var_16 = (short)28096;
unsigned short var_17 = (unsigned short)18312;
unsigned char var_19 = (unsigned char)226;
int zero = 0;
int var_20 = 984856627;
unsigned short var_21 = (unsigned short)63928;
unsigned int var_22 = 2110513016U;
unsigned int var_23 = 725736739U;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
