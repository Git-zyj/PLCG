#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1369842867U;
int var_10 = 1532933521;
long long int var_12 = 2076183430681052874LL;
long long int var_17 = 8998609696737724961LL;
int zero = 0;
unsigned short var_19 = (unsigned short)8163;
unsigned short var_20 = (unsigned short)36535;
long long int var_21 = 4548182876788921047LL;
long long int var_22 = -8414237680337570807LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
