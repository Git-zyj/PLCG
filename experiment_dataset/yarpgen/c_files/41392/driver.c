#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
int var_5 = 2145742571;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 1205446106340494940ULL;
int zero = 0;
signed char var_12 = (signed char)49;
unsigned char var_13 = (unsigned char)66;
unsigned long long int var_14 = 8457001271352678094ULL;
signed char var_15 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
