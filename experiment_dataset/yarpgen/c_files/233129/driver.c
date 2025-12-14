#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)47063;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-3554;
long long int var_8 = 8408349490450984590LL;
int zero = 0;
unsigned long long int var_12 = 14214056344487915712ULL;
long long int var_13 = 5435605926276380596LL;
void init() {
}

void checksum() {
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
