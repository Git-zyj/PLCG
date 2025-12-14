#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned char var_1 = (unsigned char)233;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2146806375U;
int var_14 = -1481365156;
unsigned int var_16 = 1586704554U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)3085;
unsigned short var_19 = (unsigned short)62040;
int var_20 = -1876382064;
unsigned long long int var_21 = 8056090931646383721ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
