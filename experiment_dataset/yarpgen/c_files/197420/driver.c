#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 180514306;
int var_5 = -2062412452;
unsigned char var_10 = (unsigned char)186;
short var_11 = (short)-18894;
unsigned long long int var_14 = 5396108329280144877ULL;
int var_16 = 1601669365;
int zero = 0;
int var_19 = -194200990;
unsigned char var_20 = (unsigned char)213;
void init() {
}

void checksum() {
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
