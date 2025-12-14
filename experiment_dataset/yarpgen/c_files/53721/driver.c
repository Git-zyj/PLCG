#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-16325;
long long int var_6 = -8571062258564970328LL;
short var_7 = (short)-7533;
int var_8 = -1414755263;
unsigned short var_10 = (unsigned short)18524;
short var_11 = (short)32153;
int zero = 0;
unsigned int var_13 = 1098079503U;
unsigned long long int var_14 = 12114926135786448672ULL;
short var_15 = (short)21092;
unsigned long long int var_16 = 11112460948880216234ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
