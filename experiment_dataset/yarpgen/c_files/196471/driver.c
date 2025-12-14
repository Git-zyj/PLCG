#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23424;
long long int var_2 = -1750129586347382023LL;
unsigned char var_4 = (unsigned char)57;
long long int var_8 = 2205128826767948347LL;
unsigned int var_9 = 3512683833U;
short var_12 = (short)16247;
signed char var_13 = (signed char)-52;
long long int var_14 = 5696207150193595805LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-22;
int zero = 0;
signed char var_19 = (signed char)93;
signed char var_20 = (signed char)-52;
unsigned char var_21 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
