#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 376748838;
long long int var_2 = 352033720733467080LL;
unsigned short var_4 = (unsigned short)58234;
long long int var_5 = -6996998035492018180LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-29836;
int var_12 = -615369955;
unsigned short var_13 = (unsigned short)6321;
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
