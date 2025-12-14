#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2092161425U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-36;
signed char var_4 = (signed char)-12;
short var_5 = (short)9606;
signed char var_6 = (signed char)-33;
short var_7 = (short)20850;
unsigned short var_9 = (unsigned short)41391;
int zero = 0;
unsigned int var_10 = 242325549U;
signed char var_11 = (signed char)37;
signed char var_12 = (signed char)-77;
short var_13 = (short)27346;
unsigned char var_14 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
