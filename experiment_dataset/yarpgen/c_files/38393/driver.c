#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)7;
unsigned char var_3 = (unsigned char)139;
unsigned char var_7 = (unsigned char)14;
signed char var_11 = (signed char)-112;
int zero = 0;
long long int var_20 = 5290598578213003179LL;
long long int var_21 = 2231336048927102210LL;
unsigned long long int var_22 = 15961582834934588367ULL;
void init() {
}

void checksum() {
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
