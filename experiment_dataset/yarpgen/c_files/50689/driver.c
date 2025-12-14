#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25900;
unsigned int var_4 = 4220479482U;
unsigned long long int var_15 = 8372539597839881956ULL;
unsigned long long int var_16 = 18445185437694327180ULL;
unsigned int var_17 = 3343958665U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2624501082U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
