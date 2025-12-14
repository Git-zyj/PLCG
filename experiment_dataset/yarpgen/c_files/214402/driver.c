#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 210327646;
int var_3 = -2117635485;
long long int var_4 = 2609969376778522932LL;
unsigned int var_5 = 3085147849U;
signed char var_6 = (signed char)-90;
signed char var_7 = (signed char)2;
signed char var_10 = (signed char)10;
int var_12 = -2146032836;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)189;
int var_16 = 1645588990;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
