#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4200718907732955500ULL;
unsigned char var_4 = (unsigned char)106;
signed char var_13 = (signed char)58;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)12599;
unsigned long long int var_16 = 8282799721609975956ULL;
unsigned long long int var_17 = 5759405610970022070ULL;
unsigned long long int var_18 = 3213057270432237927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
