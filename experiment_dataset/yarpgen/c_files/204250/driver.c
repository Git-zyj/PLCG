#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2127561380U;
long long int var_4 = 7548787068383832375LL;
long long int var_5 = -5581160729145777492LL;
short var_9 = (short)-23926;
unsigned int var_10 = 2221444745U;
unsigned long long int var_12 = 6786878577575032077ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12590608005652108586ULL;
unsigned int var_15 = 219738844U;
signed char var_16 = (signed char)17;
void init() {
}

void checksum() {
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
