#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -342659958;
short var_10 = (short)30699;
unsigned char var_11 = (unsigned char)14;
long long int var_12 = 4277334136174917828LL;
unsigned char var_15 = (unsigned char)16;
short var_18 = (short)-450;
short var_19 = (short)-19813;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-27560;
unsigned int var_22 = 2338140973U;
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
