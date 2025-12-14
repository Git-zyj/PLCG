#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2177828433U;
int var_3 = -1412161798;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)13;
_Bool var_13 = (_Bool)1;
int var_14 = 728868257;
unsigned char var_15 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
