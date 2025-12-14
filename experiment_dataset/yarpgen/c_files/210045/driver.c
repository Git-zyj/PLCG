#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1371833893;
unsigned long long int var_1 = 15423268387201122482ULL;
_Bool var_2 = (_Bool)0;
int var_5 = 691833745;
unsigned short var_6 = (unsigned short)29561;
long long int var_9 = 5615339261586265095LL;
short var_15 = (short)-17396;
int zero = 0;
signed char var_18 = (signed char)17;
unsigned short var_19 = (unsigned short)64982;
unsigned long long int var_20 = 1620796345266327955ULL;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
