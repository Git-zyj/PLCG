#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)-30150;
_Bool var_4 = (_Bool)1;
int var_7 = 1220583368;
int var_9 = 1886909677;
int var_10 = 15208612;
int zero = 0;
unsigned int var_11 = 1827677149U;
unsigned int var_12 = 3693243496U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
