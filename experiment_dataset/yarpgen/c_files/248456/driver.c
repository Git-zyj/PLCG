#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1509116589U;
short var_3 = (short)-5794;
int var_6 = 666771361;
int zero = 0;
unsigned long long int var_12 = 3082295153925508432ULL;
unsigned short var_13 = (unsigned short)12931;
short var_14 = (short)23636;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
