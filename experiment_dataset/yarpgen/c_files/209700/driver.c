#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16366467711629076744ULL;
unsigned char var_5 = (unsigned char)181;
unsigned int var_7 = 3014765433U;
unsigned long long int var_9 = 2761948617708784803ULL;
int var_11 = -1976746613;
int var_12 = 621820632;
int zero = 0;
unsigned int var_13 = 953168457U;
int var_14 = 877914902;
int var_15 = 106511583;
int var_16 = -1424697725;
unsigned char var_17 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
