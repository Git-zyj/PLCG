#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)74;
unsigned int var_5 = 2031870178U;
unsigned int var_6 = 3948705380U;
short var_7 = (short)10541;
unsigned long long int var_8 = 17870867452785429978ULL;
long long int var_10 = 1678655329769497256LL;
int zero = 0;
unsigned long long int var_11 = 16030555741686045040ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-36;
short var_14 = (short)2776;
unsigned long long int var_15 = 4523874951458831701ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
