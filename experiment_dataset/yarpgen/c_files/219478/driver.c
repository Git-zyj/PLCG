#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)84;
signed char var_8 = (signed char)-127;
int var_11 = 432359936;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
unsigned int var_19 = 1117400568U;
short var_20 = (short)17969;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)21557;
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
