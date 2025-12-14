#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 249816737;
short var_2 = (short)10759;
unsigned int var_3 = 1656335241U;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 12956885682006530329ULL;
unsigned short var_18 = (unsigned short)56257;
void init() {
}

void checksum() {
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
