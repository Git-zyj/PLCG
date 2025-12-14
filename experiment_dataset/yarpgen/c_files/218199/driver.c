#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13132600975903537799ULL;
unsigned long long int var_8 = 13145638158229153794ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)26368;
unsigned long long int var_13 = 16912193779345471852ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
