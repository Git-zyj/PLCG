#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3345523452213998126LL;
long long int var_3 = 2549602629038333029LL;
short var_7 = (short)15036;
signed char var_8 = (signed char)-16;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4747625188691166554LL;
signed char var_17 = (signed char)106;
int zero = 0;
short var_18 = (short)21906;
unsigned long long int var_19 = 12197793378625009935ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
