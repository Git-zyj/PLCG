#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17957;
unsigned int var_3 = 3527906097U;
long long int var_5 = 7613804101266145928LL;
unsigned int var_7 = 4215592732U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-31835;
unsigned int var_10 = 132140698U;
long long int var_11 = -2928443700086941725LL;
unsigned int var_12 = 1999730322U;
signed char var_14 = (signed char)57;
unsigned short var_15 = (unsigned short)4161;
int zero = 0;
long long int var_17 = -7264236307319322431LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)10331;
void init() {
}

void checksum() {
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
