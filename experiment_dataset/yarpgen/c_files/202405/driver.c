#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
unsigned int var_1 = 3477667173U;
long long int var_2 = 4571358987474486708LL;
unsigned long long int var_4 = 9834638268166626488ULL;
unsigned int var_5 = 1099349073U;
_Bool var_6 = (_Bool)0;
int var_8 = -1974804028;
unsigned int var_10 = 3604102612U;
signed char var_11 = (signed char)17;
signed char var_12 = (signed char)59;
long long int var_13 = 1052059328592190576LL;
int zero = 0;
long long int var_14 = 3796099374894267039LL;
long long int var_15 = -458142987777865112LL;
signed char var_16 = (signed char)46;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
