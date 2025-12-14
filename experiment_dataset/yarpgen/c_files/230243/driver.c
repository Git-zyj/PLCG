#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7088002842719025670LL;
unsigned short var_1 = (unsigned short)50284;
unsigned int var_3 = 2020042280U;
unsigned char var_5 = (unsigned char)4;
short var_10 = (short)11757;
int zero = 0;
short var_11 = (short)-4951;
short var_12 = (short)27331;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
