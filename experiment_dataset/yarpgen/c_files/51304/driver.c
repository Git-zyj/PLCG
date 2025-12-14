#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51727;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-24240;
unsigned long long int var_5 = 687803019994866382ULL;
short var_6 = (short)13776;
signed char var_8 = (signed char)105;
short var_10 = (short)25593;
int zero = 0;
short var_14 = (short)-2241;
short var_15 = (short)12332;
unsigned long long int var_16 = 6079322679765411326ULL;
short var_17 = (short)-18054;
signed char var_18 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
