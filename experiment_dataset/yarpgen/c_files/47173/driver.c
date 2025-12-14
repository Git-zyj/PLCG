#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14815;
short var_1 = (short)-836;
signed char var_2 = (signed char)-99;
unsigned int var_5 = 613900134U;
short var_7 = (short)4975;
long long int var_9 = 7691020829178473126LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)17725;
unsigned long long int var_13 = 10667197152933265240ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-35;
long long int var_16 = 2854116908652733210LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
