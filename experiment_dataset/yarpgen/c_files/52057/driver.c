#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7931251498616592320ULL;
short var_5 = (short)9804;
signed char var_6 = (signed char)26;
unsigned long long int var_8 = 8972948905803965817ULL;
unsigned long long int var_11 = 6079750617116667053ULL;
unsigned short var_12 = (unsigned short)25775;
int zero = 0;
signed char var_13 = (signed char)-75;
unsigned short var_14 = (unsigned short)24007;
void init() {
}

void checksum() {
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
