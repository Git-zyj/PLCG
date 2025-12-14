#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18522;
signed char var_1 = (signed char)-49;
int var_4 = 1704838383;
unsigned int var_5 = 1932690166U;
short var_6 = (short)-18969;
unsigned long long int var_9 = 1078058821051344231ULL;
int var_10 = 961123294;
unsigned long long int var_11 = 14789922286518318504ULL;
int zero = 0;
unsigned long long int var_12 = 3911949342078089170ULL;
short var_13 = (short)-2701;
int var_14 = -1059766762;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
