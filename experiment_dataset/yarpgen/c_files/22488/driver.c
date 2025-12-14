#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6093;
long long int var_2 = -8934537047939997439LL;
unsigned long long int var_3 = 16663247603723842185ULL;
unsigned long long int var_4 = 17335158660419572042ULL;
unsigned char var_6 = (unsigned char)18;
short var_10 = (short)3782;
short var_12 = (short)1651;
int zero = 0;
unsigned int var_16 = 2575806415U;
unsigned long long int var_17 = 11419126254497850622ULL;
unsigned long long int var_18 = 1564402318762222520ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
