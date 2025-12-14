#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -473264202;
int var_1 = 479879753;
long long int var_8 = -308997300829292161LL;
unsigned short var_10 = (unsigned short)6895;
int zero = 0;
short var_11 = (short)-1211;
short var_12 = (short)-10219;
unsigned short var_13 = (unsigned short)26395;
long long int var_14 = -2087902413272983483LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
