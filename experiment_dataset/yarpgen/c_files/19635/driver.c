#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22425;
short var_1 = (short)18103;
signed char var_6 = (signed char)36;
short var_7 = (short)28138;
short var_8 = (short)-14545;
long long int var_10 = 4962998905058076200LL;
int zero = 0;
long long int var_19 = -7596500848060748740LL;
unsigned char var_20 = (unsigned char)251;
long long int var_21 = -3554346291067820283LL;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-4898;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
