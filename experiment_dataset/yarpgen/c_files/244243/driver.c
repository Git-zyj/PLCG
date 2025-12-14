#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22529;
unsigned char var_12 = (unsigned char)138;
unsigned long long int var_17 = 9492783198865049788ULL;
int zero = 0;
unsigned int var_18 = 3712509262U;
signed char var_19 = (signed char)32;
unsigned int var_20 = 1700661798U;
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
