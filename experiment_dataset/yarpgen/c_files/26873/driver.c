#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31976;
short var_4 = (short)4272;
unsigned int var_5 = 3576890182U;
long long int var_8 = 6645607571578354201LL;
unsigned long long int var_9 = 3521058179376749314ULL;
short var_10 = (short)-25490;
signed char var_12 = (signed char)64;
int zero = 0;
unsigned int var_14 = 4045729272U;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2520206503782689061ULL;
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
