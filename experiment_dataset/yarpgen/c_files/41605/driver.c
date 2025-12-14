#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17727941185926586688ULL;
signed char var_5 = (signed char)-23;
unsigned int var_8 = 3282984158U;
long long int var_14 = 713896586792504530LL;
long long int var_15 = -5933508879610066861LL;
int zero = 0;
unsigned long long int var_16 = 4120281359568108479ULL;
int var_17 = 1579421467;
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
