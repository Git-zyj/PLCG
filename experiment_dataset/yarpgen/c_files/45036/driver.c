#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1507751044;
int var_2 = -1659015425;
unsigned int var_3 = 3748778125U;
short var_5 = (short)-22203;
long long int var_7 = -5874096234801391501LL;
unsigned int var_8 = 3167419045U;
unsigned int var_9 = 698806331U;
int zero = 0;
short var_11 = (short)-14041;
unsigned long long int var_12 = 11240091973038795139ULL;
short var_13 = (short)31751;
short var_14 = (short)8729;
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
