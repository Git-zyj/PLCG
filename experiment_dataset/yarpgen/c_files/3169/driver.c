#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 404937082U;
short var_6 = (short)-14972;
long long int var_14 = 2270013535144789889LL;
unsigned int var_18 = 3336204954U;
int zero = 0;
signed char var_19 = (signed char)32;
unsigned int var_20 = 2969070373U;
unsigned long long int var_21 = 16920289757557860969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
