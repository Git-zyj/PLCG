#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1524494555;
unsigned int var_4 = 559277354U;
int var_5 = 2096044698;
unsigned long long int var_8 = 6378169137360606722ULL;
short var_11 = (short)12727;
long long int var_13 = 8545438518607615182LL;
int zero = 0;
long long int var_14 = 4814267938761907054LL;
unsigned short var_15 = (unsigned short)25385;
int var_16 = -1363461119;
signed char var_17 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
