#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18242;
long long int var_2 = 78346000745284185LL;
unsigned int var_4 = 425366584U;
unsigned long long int var_6 = 11080889087191136088ULL;
unsigned long long int var_7 = 9951435188473009718ULL;
unsigned char var_8 = (unsigned char)194;
long long int var_9 = 1201856154743022627LL;
long long int var_10 = -1355001861445566779LL;
short var_11 = (short)14655;
signed char var_12 = (signed char)-46;
int zero = 0;
unsigned int var_14 = 674868569U;
short var_15 = (short)18735;
int var_16 = 1985813459;
short var_17 = (short)8193;
short var_18 = (short)-30573;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
