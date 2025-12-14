#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1244366224;
unsigned int var_8 = 3181716498U;
int var_13 = -1604753858;
unsigned short var_16 = (unsigned short)59305;
int zero = 0;
unsigned short var_18 = (unsigned short)1721;
int var_19 = 259297566;
unsigned char var_20 = (unsigned char)139;
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
