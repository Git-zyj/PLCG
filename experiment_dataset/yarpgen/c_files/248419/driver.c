#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1852465621;
long long int var_14 = 4787636072034989010LL;
signed char var_16 = (signed char)17;
int zero = 0;
unsigned long long int var_20 = 9987124027643133578ULL;
signed char var_21 = (signed char)82;
void init() {
}

void checksum() {
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
