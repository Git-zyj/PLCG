#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8130867184809031313ULL;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)15;
short var_6 = (short)-30849;
short var_11 = (short)-4224;
short var_12 = (short)-13104;
int zero = 0;
signed char var_13 = (signed char)-42;
unsigned short var_14 = (unsigned short)12949;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
