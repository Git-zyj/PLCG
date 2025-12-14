#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9840391827593770954ULL;
unsigned int var_1 = 513622743U;
unsigned int var_4 = 2849692310U;
unsigned short var_7 = (unsigned short)47099;
long long int var_9 = -8718790253739038015LL;
int zero = 0;
int var_14 = -1576295196;
long long int var_15 = -1775015483686160150LL;
short var_16 = (short)14721;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
