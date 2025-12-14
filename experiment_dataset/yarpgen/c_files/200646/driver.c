#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 515898025U;
unsigned long long int var_6 = 16031861498943528230ULL;
signed char var_14 = (signed char)86;
unsigned char var_16 = (unsigned char)38;
int zero = 0;
unsigned short var_19 = (unsigned short)18543;
short var_20 = (short)21433;
unsigned long long int var_21 = 5088984085705328185ULL;
unsigned long long int var_22 = 12594048093818674222ULL;
signed char var_23 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
