#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)78;
unsigned int var_5 = 1705480338U;
unsigned long long int var_6 = 7912644776333207240ULL;
unsigned long long int var_7 = 7901677300414558446ULL;
unsigned int var_8 = 2367990256U;
long long int var_10 = -6603371754616936837LL;
int zero = 0;
short var_13 = (short)-13083;
long long int var_14 = -7041592127362954535LL;
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
