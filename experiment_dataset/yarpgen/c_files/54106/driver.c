#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19066;
unsigned int var_2 = 2588677813U;
int var_4 = 1522026141;
unsigned short var_5 = (unsigned short)51690;
unsigned short var_7 = (unsigned short)57392;
_Bool var_8 = (_Bool)1;
int var_11 = 1542333506;
int zero = 0;
short var_12 = (short)23015;
signed char var_13 = (signed char)-74;
int var_14 = -1623785691;
long long int var_15 = 7362413475805621803LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
