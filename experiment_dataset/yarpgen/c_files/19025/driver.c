#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 793971144U;
unsigned int var_3 = 2933098357U;
short var_4 = (short)-7077;
long long int var_5 = -3360157108394123312LL;
unsigned long long int var_6 = 6779273317800322111ULL;
long long int var_7 = -5642533588296016661LL;
short var_10 = (short)-31500;
int zero = 0;
short var_11 = (short)-11803;
unsigned int var_12 = 1846655011U;
signed char var_13 = (signed char)-110;
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
