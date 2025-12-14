#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -9081513877320791222LL;
unsigned int var_12 = 915560643U;
long long int var_13 = -5940282084449070031LL;
int zero = 0;
signed char var_14 = (signed char)89;
unsigned int var_15 = 4187696359U;
unsigned short var_16 = (unsigned short)23738;
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
