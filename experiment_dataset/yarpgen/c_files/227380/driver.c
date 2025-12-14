#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4865;
unsigned long long int var_3 = 6823014893988317008ULL;
short var_4 = (short)24112;
unsigned int var_5 = 4056020172U;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)58;
int var_13 = -457195205;
short var_15 = (short)2005;
int zero = 0;
long long int var_19 = 7356454363126835268LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
