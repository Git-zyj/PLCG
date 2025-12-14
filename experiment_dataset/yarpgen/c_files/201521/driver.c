#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1234601208;
short var_4 = (short)-29438;
unsigned int var_6 = 3735928868U;
int var_7 = -1138516299;
long long int var_8 = 1148784432926634651LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)-22194;
signed char var_11 = (signed char)58;
long long int var_12 = 1281376260617005167LL;
short var_13 = (short)20441;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
