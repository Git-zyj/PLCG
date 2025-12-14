#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 765157949362060660ULL;
int var_2 = -1317557203;
unsigned char var_4 = (unsigned char)67;
unsigned char var_6 = (unsigned char)63;
long long int var_7 = -6039456018699405016LL;
signed char var_8 = (signed char)0;
unsigned int var_10 = 4020389845U;
unsigned int var_11 = 2151491924U;
int zero = 0;
long long int var_12 = -7645768080355684067LL;
short var_13 = (short)20073;
unsigned long long int var_14 = 689139331906257313ULL;
unsigned int var_15 = 3312357599U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
