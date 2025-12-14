#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
short var_1 = (short)5578;
unsigned short var_2 = (unsigned short)31045;
short var_4 = (short)-10055;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -7756561926904369720LL;
long long int var_11 = -1355237908544561041LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -572752107010553953LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
