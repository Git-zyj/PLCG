#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5582313279018563956ULL;
unsigned short var_5 = (unsigned short)25081;
unsigned int var_8 = 3018981690U;
int zero = 0;
signed char var_11 = (signed char)7;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2572589727566318172LL;
long long int var_14 = 6749129127860469665LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
