#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7590874135608143983LL;
int var_3 = -474336593;
_Bool var_6 = (_Bool)0;
long long int var_8 = -3131041347827603359LL;
unsigned int var_13 = 607444832U;
signed char var_15 = (signed char)70;
int zero = 0;
int var_16 = -307493091;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
