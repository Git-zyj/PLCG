#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12406227396192857950ULL;
signed char var_6 = (signed char)13;
short var_7 = (short)24747;
short var_8 = (short)-29412;
short var_9 = (short)7292;
short var_10 = (short)-9066;
short var_15 = (short)26618;
int zero = 0;
int var_16 = -1101418250;
signed char var_17 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
