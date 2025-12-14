#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)22;
signed char var_5 = (signed char)-114;
unsigned long long int var_9 = 11506762994708721673ULL;
signed char var_16 = (signed char)-86;
unsigned long long int var_17 = 2200392008988878797ULL;
unsigned char var_18 = (unsigned char)248;
int zero = 0;
unsigned long long int var_19 = 4673903924526989833ULL;
unsigned char var_20 = (unsigned char)62;
void init() {
}

void checksum() {
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
