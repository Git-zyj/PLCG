#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_5 = 814161839;
long long int var_9 = -1977064462576068604LL;
signed char var_10 = (signed char)-82;
signed char var_12 = (signed char)-57;
int zero = 0;
unsigned int var_14 = 902194636U;
unsigned int var_15 = 2129826901U;
int var_16 = -270313920;
unsigned char var_17 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
