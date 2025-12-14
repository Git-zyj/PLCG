#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3381800906U;
long long int var_6 = 404492292173603674LL;
unsigned int var_12 = 2449844751U;
int zero = 0;
long long int var_18 = -7167734629245989417LL;
signed char var_19 = (signed char)116;
signed char var_20 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
