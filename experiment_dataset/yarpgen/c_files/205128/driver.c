#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17080228325472854811ULL;
int var_2 = 1263191249;
unsigned long long int var_6 = 434734090612999489ULL;
short var_11 = (short)8048;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)242;
unsigned long long int var_14 = 9221603718726199226ULL;
unsigned short var_15 = (unsigned short)37235;
long long int var_16 = 703940992984503191LL;
void init() {
}

void checksum() {
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
