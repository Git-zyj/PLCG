#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
signed char var_1 = (signed char)77;
signed char var_4 = (signed char)-56;
signed char var_10 = (signed char)-127;
int var_14 = -804516441;
short var_16 = (short)941;
signed char var_17 = (signed char)-75;
int zero = 0;
unsigned int var_20 = 1071316515U;
unsigned short var_21 = (unsigned short)11816;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
