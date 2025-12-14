#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4045954269U;
unsigned long long int var_2 = 17612825021399493039ULL;
int var_3 = -2025742308;
unsigned long long int var_11 = 12786325897381953489ULL;
unsigned short var_12 = (unsigned short)60428;
int zero = 0;
unsigned long long int var_15 = 9048311954472066379ULL;
int var_16 = 1029836858;
unsigned long long int var_17 = 9570199370579046056ULL;
_Bool var_18 = (_Bool)1;
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
