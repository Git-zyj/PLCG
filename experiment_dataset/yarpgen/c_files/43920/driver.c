#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)112;
signed char var_4 = (signed char)-30;
short var_6 = (short)21316;
_Bool var_11 = (_Bool)1;
short var_12 = (short)51;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)61;
int var_21 = 452808961;
unsigned long long int var_22 = 12172819194568823828ULL;
void init() {
}

void checksum() {
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
