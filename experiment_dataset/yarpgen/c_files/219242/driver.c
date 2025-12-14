#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11020099658134825554ULL;
unsigned int var_2 = 3336848687U;
long long int var_3 = -318032400707612964LL;
signed char var_5 = (signed char)75;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 3220630708U;
int zero = 0;
unsigned int var_10 = 3794969272U;
unsigned long long int var_11 = 6211686669735131928ULL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
