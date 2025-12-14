#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6795;
unsigned long long int var_2 = 10351761842438840918ULL;
long long int var_3 = -3273945430725847776LL;
unsigned int var_4 = 2038130401U;
long long int var_5 = 7977211598429130091LL;
unsigned long long int var_6 = 11640306548895062225ULL;
unsigned char var_9 = (unsigned char)56;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
unsigned int var_11 = 1382296806U;
unsigned long long int var_12 = 13076264240055881111ULL;
int var_13 = 1099142889;
short var_14 = (short)-10776;
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
