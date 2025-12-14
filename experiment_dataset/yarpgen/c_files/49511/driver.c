#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4054948603U;
unsigned short var_3 = (unsigned short)50850;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 4181371387U;
int zero = 0;
unsigned int var_16 = 3697070399U;
unsigned int var_17 = 3172009427U;
short var_18 = (short)-10599;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
