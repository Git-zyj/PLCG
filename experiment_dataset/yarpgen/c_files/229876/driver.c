#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)9063;
unsigned int var_10 = 1893965525U;
unsigned int var_12 = 777387620U;
int zero = 0;
unsigned short var_14 = (unsigned short)18040;
int var_15 = 816383924;
unsigned short var_16 = (unsigned short)60678;
short var_17 = (short)19619;
short var_18 = (short)-25440;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
