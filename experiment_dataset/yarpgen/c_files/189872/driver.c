#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5294;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5521465009519408420LL;
int var_8 = 592099595;
short var_9 = (short)-17433;
short var_12 = (short)-1694;
long long int var_13 = 5272313069150741821LL;
long long int var_14 = -6069086768744614016LL;
int zero = 0;
long long int var_15 = 5656593564477691432LL;
signed char var_16 = (signed char)-31;
int var_17 = -1059405645;
short var_18 = (short)-28451;
short var_19 = (short)-1142;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
