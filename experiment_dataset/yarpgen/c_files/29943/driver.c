#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)71;
unsigned char var_6 = (unsigned char)127;
unsigned char var_8 = (unsigned char)87;
unsigned long long int var_11 = 5457482620592540834ULL;
unsigned int var_16 = 705621638U;
int zero = 0;
unsigned long long int var_19 = 15718658150419785389ULL;
unsigned long long int var_20 = 10017311834755888281ULL;
int var_21 = -398313741;
unsigned int var_22 = 130683334U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
