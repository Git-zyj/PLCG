#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned int var_4 = 2357783130U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)22776;
signed char var_7 = (signed char)61;
int var_10 = -1771486502;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)125;
signed char var_15 = (signed char)93;
unsigned short var_16 = (unsigned short)13881;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
long long int var_19 = 2931121666620420974LL;
unsigned int var_20 = 3441546632U;
unsigned int var_21 = 3486411028U;
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
