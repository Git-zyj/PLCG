#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -249852836;
unsigned short var_5 = (unsigned short)16025;
unsigned long long int var_7 = 14446328178720774163ULL;
unsigned long long int var_8 = 14068253777637654447ULL;
long long int var_15 = 3835663562352538404LL;
long long int var_17 = 1859396211935224660LL;
short var_18 = (short)-20116;
int zero = 0;
int var_20 = -1064844104;
unsigned int var_21 = 471285943U;
int var_22 = 1443022796;
signed char var_23 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
