#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -645105638;
short var_3 = (short)-818;
short var_4 = (short)1633;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2211572318U;
int zero = 0;
int var_12 = -1649805911;
short var_13 = (short)-3886;
unsigned long long int var_14 = 13377998364154129118ULL;
long long int var_15 = -6312629118860805642LL;
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
