#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5216167371868675919LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)8632;
unsigned int var_7 = 1227712368U;
unsigned int var_16 = 1899901166U;
int zero = 0;
int var_19 = -2129555350;
int var_20 = 636764371;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
