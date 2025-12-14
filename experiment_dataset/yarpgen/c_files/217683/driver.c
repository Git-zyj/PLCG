#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3418561188U;
unsigned long long int var_3 = 10648797772249223160ULL;
unsigned int var_6 = 2283805734U;
long long int var_8 = -2675235947935782036LL;
unsigned int var_9 = 1526673836U;
unsigned int var_10 = 1617274980U;
unsigned long long int var_13 = 17732744196179747224ULL;
unsigned int var_17 = 2583726297U;
int zero = 0;
long long int var_18 = 1177036215208325441LL;
unsigned long long int var_19 = 3207635339141156317ULL;
unsigned int var_20 = 3182286341U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 44685658U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
