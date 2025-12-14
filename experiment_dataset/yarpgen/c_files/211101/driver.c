#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47935;
unsigned long long int var_1 = 14921711803267006632ULL;
int var_2 = -1737668609;
unsigned int var_4 = 452289952U;
int var_15 = -2076073438;
_Bool var_16 = (_Bool)0;
int var_17 = -903909867;
int var_19 = -1653122216;
int zero = 0;
unsigned long long int var_20 = 10835808304139807709ULL;
unsigned int var_21 = 1995459216U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
