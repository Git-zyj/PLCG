#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4330826373682358795ULL;
unsigned long long int var_6 = 11328842279104848369ULL;
signed char var_9 = (signed char)40;
int var_10 = 619984120;
int var_12 = -138906921;
int zero = 0;
unsigned long long int var_16 = 12670337374523117787ULL;
int var_17 = -2055984711;
unsigned long long int var_18 = 17193208799590738821ULL;
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
