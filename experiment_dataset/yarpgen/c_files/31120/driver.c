#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1441;
unsigned int var_2 = 1262159739U;
unsigned long long int var_3 = 2610016091333690154ULL;
unsigned short var_6 = (unsigned short)26928;
int var_10 = -1091728639;
int zero = 0;
unsigned int var_14 = 442178512U;
unsigned int var_15 = 275735120U;
unsigned int var_16 = 2495949227U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
