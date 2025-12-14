#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3742045900018136297LL;
long long int var_8 = 4292749150949634396LL;
signed char var_10 = (signed char)89;
signed char var_12 = (signed char)-28;
int zero = 0;
short var_16 = (short)-5997;
signed char var_17 = (signed char)101;
unsigned int var_18 = 2808110680U;
void init() {
}

void checksum() {
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
