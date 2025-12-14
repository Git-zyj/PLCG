#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51133;
unsigned char var_7 = (unsigned char)34;
unsigned char var_8 = (unsigned char)149;
unsigned char var_11 = (unsigned char)235;
signed char var_13 = (signed char)-19;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)3073;
long long int var_21 = 2067107907935424445LL;
unsigned short var_22 = (unsigned short)34351;
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
