#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-75;
long long int var_5 = 7453564094258100822LL;
short var_6 = (short)-4882;
int var_7 = -1418236536;
unsigned char var_11 = (unsigned char)243;
int zero = 0;
unsigned short var_12 = (unsigned short)52839;
unsigned long long int var_13 = 9871606948999353177ULL;
int var_14 = 938135876;
short var_15 = (short)-19520;
signed char var_16 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
