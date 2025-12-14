#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
long long int var_2 = -239988412842860606LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-51;
unsigned long long int var_6 = 12422751894882647774ULL;
int var_7 = 1959366095;
unsigned int var_8 = 972796129U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3229457276137563385ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
