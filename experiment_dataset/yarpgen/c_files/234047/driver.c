#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1970;
unsigned short var_3 = (unsigned short)53912;
unsigned char var_4 = (unsigned char)221;
unsigned short var_6 = (unsigned short)1919;
unsigned int var_8 = 1976607650U;
short var_9 = (short)31054;
unsigned short var_11 = (unsigned short)1855;
int zero = 0;
unsigned long long int var_12 = 10571169455984542925ULL;
unsigned int var_13 = 2252648519U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
