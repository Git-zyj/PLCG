#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 490097113U;
unsigned int var_5 = 746084243U;
long long int var_6 = -4476886707314216748LL;
signed char var_7 = (signed char)-104;
int var_9 = -1160786532;
int var_13 = -50405736;
int var_15 = -167641860;
short var_17 = (short)-15778;
int zero = 0;
int var_19 = 36897081;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
