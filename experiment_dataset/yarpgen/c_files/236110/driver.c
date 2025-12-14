#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17660153509118648987ULL;
unsigned short var_3 = (unsigned short)42160;
signed char var_4 = (signed char)-42;
unsigned long long int var_5 = 16506273446704968202ULL;
short var_6 = (short)31475;
short var_8 = (short)4419;
short var_13 = (short)15854;
int var_16 = -1106294807;
unsigned char var_18 = (unsigned char)120;
unsigned long long int var_19 = 10881418029489404320ULL;
int zero = 0;
unsigned int var_20 = 98908837U;
unsigned short var_21 = (unsigned short)28861;
signed char var_22 = (signed char)-6;
unsigned int var_23 = 4088807103U;
signed char var_24 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
