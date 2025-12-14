#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)14475;
signed char var_13 = (signed char)94;
int var_15 = -345906647;
long long int var_16 = -7228623716128855984LL;
int zero = 0;
short var_19 = (short)24950;
int var_20 = 738408052;
short var_21 = (short)21337;
unsigned short var_22 = (unsigned short)52478;
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
