#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
unsigned char var_5 = (unsigned char)133;
signed char var_8 = (signed char)8;
signed char var_12 = (signed char)4;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
signed char var_15 = (signed char)-11;
int var_16 = -1212489353;
unsigned long long int var_17 = 1041526155274866138ULL;
unsigned long long int var_18 = 17322237653270122083ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
