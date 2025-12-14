#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9853;
short var_1 = (short)-6949;
unsigned short var_6 = (unsigned short)15291;
unsigned short var_7 = (unsigned short)23391;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)225;
unsigned int var_12 = 1756748779U;
int var_13 = 6957372;
int zero = 0;
unsigned int var_14 = 2162690979U;
long long int var_15 = -8471921098279760287LL;
long long int var_16 = 6388190428702310475LL;
int var_17 = -1375996149;
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
