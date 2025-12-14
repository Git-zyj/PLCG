#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5462885018287054599LL;
short var_4 = (short)2535;
signed char var_5 = (signed char)109;
unsigned short var_10 = (unsigned short)9335;
short var_11 = (short)30318;
int var_12 = -1003965216;
_Bool var_14 = (_Bool)1;
int var_15 = -768977165;
int var_17 = -934178321;
unsigned long long int var_19 = 12439903115844465695ULL;
int zero = 0;
signed char var_20 = (signed char)-37;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-28985;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
