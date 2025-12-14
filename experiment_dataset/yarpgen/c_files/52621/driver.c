#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)87;
long long int var_4 = 1373590486701396398LL;
unsigned short var_5 = (unsigned short)25427;
short var_6 = (short)-19578;
int zero = 0;
short var_11 = (short)-5114;
short var_12 = (short)8245;
unsigned short var_13 = (unsigned short)51452;
unsigned char var_14 = (unsigned char)192;
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
