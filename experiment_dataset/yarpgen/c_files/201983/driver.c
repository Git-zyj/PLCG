#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-67;
unsigned short var_1 = (unsigned short)7228;
unsigned short var_2 = (unsigned short)26124;
unsigned short var_3 = (unsigned short)21921;
short var_4 = (short)17477;
signed char var_5 = (signed char)-33;
signed char var_7 = (signed char)34;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3331625939U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)66;
int zero = 0;
signed char var_12 = (signed char)122;
signed char var_13 = (signed char)66;
signed char var_14 = (signed char)47;
signed char var_15 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
