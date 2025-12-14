#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1090788374U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10142938408416449142ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3793443820375108234ULL;
unsigned int var_9 = 4065878192U;
unsigned long long int var_10 = 4410575782243216810ULL;
int zero = 0;
long long int var_11 = -1833372340228742206LL;
signed char var_12 = (signed char)-114;
unsigned short var_13 = (unsigned short)37147;
unsigned long long int var_14 = 8681497208829120197ULL;
long long int var_15 = -3664270656327609883LL;
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
