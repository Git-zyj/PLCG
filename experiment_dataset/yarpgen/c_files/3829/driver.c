#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3464368978118851793LL;
long long int var_1 = -7937558214735879856LL;
long long int var_2 = -3078250085271626665LL;
signed char var_3 = (signed char)119;
long long int var_6 = 6798484859442927186LL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)29405;
unsigned long long int var_10 = 1164358874932223448ULL;
unsigned int var_13 = 1711894333U;
unsigned long long int var_14 = 10191103364986300293ULL;
long long int var_15 = -1449298002290836699LL;
long long int var_16 = 6417157279285676703LL;
int zero = 0;
unsigned short var_17 = (unsigned short)19983;
short var_18 = (short)8088;
short var_19 = (short)-2851;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
