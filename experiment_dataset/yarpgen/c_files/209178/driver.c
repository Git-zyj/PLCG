#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7458170011566056619LL;
unsigned long long int var_3 = 3213917382725759141ULL;
long long int var_10 = -7199347976149415801LL;
int zero = 0;
int var_11 = -1998361474;
unsigned long long int var_12 = 5581696925703268059ULL;
short var_13 = (short)-32167;
unsigned short var_14 = (unsigned short)39508;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
