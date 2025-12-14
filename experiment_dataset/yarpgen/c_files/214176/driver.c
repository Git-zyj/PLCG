#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -2035277296;
signed char var_7 = (signed char)-69;
int var_8 = 419016713;
signed char var_12 = (signed char)-29;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-12821;
int var_17 = 928711743;
unsigned int var_18 = 192430207U;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-49;
short var_21 = (short)-15260;
signed char var_22 = (signed char)35;
unsigned long long int var_23 = 4482739123018221335ULL;
short var_24 = (short)-5301;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
