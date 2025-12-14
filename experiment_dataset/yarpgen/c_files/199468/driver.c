#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10942814718956903364ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_9 = 2815935710493284702ULL;
int var_10 = -1428999824;
int zero = 0;
signed char var_18 = (signed char)-53;
unsigned long long int var_19 = 18284278708878231891ULL;
unsigned int var_20 = 1833455614U;
unsigned short var_21 = (unsigned short)54452;
unsigned long long int var_22 = 644446355557371758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
