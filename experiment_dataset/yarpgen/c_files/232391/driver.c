#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2325951709U;
unsigned short var_4 = (unsigned short)26162;
int var_5 = 1870113153;
signed char var_6 = (signed char)35;
unsigned short var_7 = (unsigned short)3136;
long long int var_8 = -5560950555316569720LL;
unsigned long long int var_9 = 17877854979247218838ULL;
signed char var_10 = (signed char)105;
unsigned int var_11 = 1816156032U;
int zero = 0;
int var_12 = -797183145;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)64772;
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
