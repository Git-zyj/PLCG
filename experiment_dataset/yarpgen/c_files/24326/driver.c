#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 955875711;
unsigned int var_6 = 1112554430U;
long long int var_13 = 4937790970291162873LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-4863;
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
