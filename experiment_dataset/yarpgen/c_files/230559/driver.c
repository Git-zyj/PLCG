#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)167;
int var_3 = -1367584008;
signed char var_13 = (signed char)105;
int zero = 0;
unsigned long long int var_16 = 14327527009900481511ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -1917509006;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
