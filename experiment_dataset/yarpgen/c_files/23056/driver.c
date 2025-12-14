#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7589276759940131054LL;
unsigned short var_11 = (unsigned short)1949;
long long int var_13 = 2178929160706827689LL;
unsigned int var_14 = 1878683717U;
int zero = 0;
signed char var_16 = (signed char)-102;
signed char var_17 = (signed char)19;
short var_18 = (short)714;
void init() {
}

void checksum() {
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
