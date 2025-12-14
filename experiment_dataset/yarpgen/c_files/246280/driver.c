#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3223823388U;
short var_6 = (short)-13835;
unsigned int var_7 = 1147044873U;
unsigned short var_10 = (unsigned short)59782;
unsigned short var_11 = (unsigned short)14057;
unsigned long long int var_12 = 521348259262983559ULL;
int var_13 = -990757273;
int zero = 0;
signed char var_15 = (signed char)-102;
signed char var_16 = (signed char)37;
int var_17 = -2095836497;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
