#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8963128682060375373ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 1788846963U;
int zero = 0;
long long int var_12 = 9091792676083051541LL;
int var_13 = -1859049206;
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
