#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2516554004U;
int var_11 = -1650645653;
unsigned char var_12 = (unsigned char)221;
short var_16 = (short)6526;
unsigned int var_19 = 3090094915U;
int zero = 0;
unsigned int var_20 = 3795177200U;
unsigned long long int var_21 = 15818380500515028748ULL;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 7380408023020069401ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
