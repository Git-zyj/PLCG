#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14855403704425799612ULL;
unsigned long long int var_11 = 17307097873586407867ULL;
unsigned long long int var_16 = 11543341876199184256ULL;
int zero = 0;
signed char var_19 = (signed char)-78;
unsigned long long int var_20 = 6054485491169227394ULL;
unsigned long long int var_21 = 392491667970051591ULL;
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
