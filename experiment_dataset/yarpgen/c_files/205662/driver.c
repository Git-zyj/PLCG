#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
unsigned char var_2 = (unsigned char)106;
int var_4 = -1390417924;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
int var_11 = -1636705519;
unsigned int var_12 = 3294707762U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
