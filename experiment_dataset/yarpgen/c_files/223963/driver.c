#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned int var_6 = 3004521845U;
long long int var_7 = -5026191594141860121LL;
unsigned long long int var_18 = 12504987395927198413ULL;
int zero = 0;
signed char var_20 = (signed char)89;
unsigned int var_21 = 2337765645U;
long long int var_22 = 1553730860448510063LL;
unsigned char var_23 = (unsigned char)218;
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
