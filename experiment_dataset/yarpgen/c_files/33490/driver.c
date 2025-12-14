#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9123613583749468856LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4005895023U;
long long int var_10 = -7914699744573155134LL;
signed char var_11 = (signed char)-111;
short var_12 = (short)3378;
short var_15 = (short)26591;
int zero = 0;
unsigned char var_16 = (unsigned char)218;
signed char var_17 = (signed char)9;
unsigned int var_18 = 2269994954U;
unsigned long long int var_19 = 85342315324496790ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
