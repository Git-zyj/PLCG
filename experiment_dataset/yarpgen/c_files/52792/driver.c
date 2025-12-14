#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13168;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2971932529781075262LL;
signed char var_5 = (signed char)-93;
unsigned int var_6 = 2282761594U;
unsigned long long int var_8 = 9828732756456816540ULL;
unsigned long long int var_10 = 12996398690016022445ULL;
int var_13 = -872664340;
signed char var_15 = (signed char)119;
unsigned long long int var_16 = 7952807406973057631ULL;
short var_17 = (short)9773;
int zero = 0;
signed char var_20 = (signed char)-93;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 27063614U;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
