#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3816374865U;
unsigned int var_2 = 1711535383U;
_Bool var_5 = (_Bool)1;
long long int var_8 = 282636642802698125LL;
short var_10 = (short)14533;
int zero = 0;
unsigned int var_11 = 2618952539U;
int var_12 = -1096761040;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
