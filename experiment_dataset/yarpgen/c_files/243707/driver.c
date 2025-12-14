#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -987796930;
unsigned long long int var_1 = 8596459747030532952ULL;
short var_3 = (short)14582;
unsigned char var_4 = (unsigned char)87;
signed char var_6 = (signed char)99;
int zero = 0;
signed char var_12 = (signed char)126;
unsigned short var_13 = (unsigned short)35507;
long long int var_14 = -4039782693277621921LL;
signed char var_15 = (signed char)-67;
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
