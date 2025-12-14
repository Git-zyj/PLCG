#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20607;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 14713724216095906552ULL;
int var_8 = -1848566620;
unsigned long long int var_14 = 12467098446443407213ULL;
int zero = 0;
signed char var_17 = (signed char)-44;
_Bool var_18 = (_Bool)1;
short var_19 = (short)16675;
unsigned int var_20 = 2909642564U;
int var_21 = -2078407586;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
