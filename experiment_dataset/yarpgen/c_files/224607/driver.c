#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17012740590748668277ULL;
int var_7 = -1564779706;
unsigned long long int var_10 = 1675004192688612665ULL;
unsigned char var_14 = (unsigned char)142;
short var_17 = (short)16860;
int zero = 0;
unsigned int var_20 = 520883512U;
long long int var_21 = -2148601780791984610LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
