#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12491591420874710533ULL;
signed char var_7 = (signed char)-67;
unsigned long long int var_8 = 13208101117367444147ULL;
int var_14 = -1043352544;
int zero = 0;
short var_16 = (short)-3499;
signed char var_17 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
