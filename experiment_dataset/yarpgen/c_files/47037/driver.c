#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50513;
unsigned int var_4 = 599851597U;
short var_7 = (short)-26117;
unsigned short var_16 = (unsigned short)43796;
int zero = 0;
int var_17 = -372273258;
unsigned long long int var_18 = 7241341863933462023ULL;
unsigned int var_19 = 191198480U;
unsigned short var_20 = (unsigned short)12774;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
