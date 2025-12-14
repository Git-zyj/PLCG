#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 479660241;
int var_5 = 204624376;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 2248549647493544098ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)1650;
signed char var_19 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
