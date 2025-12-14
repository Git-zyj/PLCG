#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24440;
long long int var_1 = 8168941581796325904LL;
short var_2 = (short)18072;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 17497127381333177729ULL;
unsigned char var_7 = (unsigned char)27;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)176;
unsigned int var_12 = 3461871915U;
unsigned long long int var_13 = 1847196532418635131ULL;
unsigned char var_14 = (unsigned char)123;
unsigned short var_16 = (unsigned short)41963;
short var_17 = (short)29157;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned char var_19 = (unsigned char)124;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7014770273307429562ULL;
signed char var_22 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
