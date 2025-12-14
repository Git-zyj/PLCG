#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1324289575U;
_Bool var_1 = (_Bool)0;
long long int var_3 = -201883318901070077LL;
unsigned long long int var_5 = 17285548707862870211ULL;
int var_8 = 1711465129;
int var_10 = 917349730;
short var_11 = (short)17262;
long long int var_12 = 4679145530203470276LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)82;
int zero = 0;
signed char var_20 = (signed char)103;
signed char var_21 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
