#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned long long int var_1 = 17247708922865678881ULL;
int var_2 = -2035693193;
unsigned long long int var_3 = 6492139791171536367ULL;
signed char var_4 = (signed char)117;
int var_7 = -1707440067;
unsigned int var_9 = 772498797U;
long long int var_10 = -2554572457022557882LL;
int var_14 = 1982653172;
int zero = 0;
int var_17 = -654827720;
unsigned int var_18 = 3399648446U;
short var_19 = (short)14538;
signed char var_20 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
