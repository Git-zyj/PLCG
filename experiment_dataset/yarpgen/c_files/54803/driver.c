#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32302;
unsigned int var_3 = 2728250580U;
unsigned int var_4 = 961463154U;
signed char var_5 = (signed char)71;
short var_6 = (short)13111;
unsigned int var_10 = 1852727395U;
int zero = 0;
unsigned int var_11 = 2123142421U;
short var_12 = (short)-10807;
long long int var_13 = 3567589911752694048LL;
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
