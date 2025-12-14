#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1213964111U;
short var_10 = (short)31242;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1353232690U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)29322;
void init() {
}

void checksum() {
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
