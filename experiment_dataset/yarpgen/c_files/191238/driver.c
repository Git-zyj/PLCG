#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
int var_1 = -381995691;
unsigned char var_4 = (unsigned char)40;
int var_7 = -175512985;
int var_8 = 869489345;
unsigned int var_10 = 3683266690U;
int zero = 0;
short var_12 = (short)25240;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
