#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)30;
int var_8 = 1500056396;
signed char var_10 = (signed char)66;
unsigned short var_11 = (unsigned short)29683;
_Bool var_14 = (_Bool)0;
short var_16 = (short)25060;
int zero = 0;
signed char var_18 = (signed char)-54;
long long int var_19 = -4693111215839557770LL;
short var_20 = (short)-21789;
unsigned int var_21 = 2536461042U;
long long int var_22 = -3175860566622654508LL;
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
