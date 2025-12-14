#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19666;
short var_5 = (short)6604;
unsigned long long int var_8 = 1657294139163801099ULL;
signed char var_10 = (signed char)4;
long long int var_15 = 6079084811510464315LL;
unsigned long long int var_17 = 8088974415325007903ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)50150;
unsigned int var_19 = 3915863832U;
unsigned long long int var_20 = 14457374952949003767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
