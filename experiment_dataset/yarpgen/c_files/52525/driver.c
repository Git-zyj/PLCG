#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)108;
unsigned int var_5 = 207891786U;
long long int var_6 = -434712756227378002LL;
signed char var_7 = (signed char)-58;
int var_10 = 2019971391;
int zero = 0;
long long int var_14 = 8913283494389360303LL;
signed char var_15 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
