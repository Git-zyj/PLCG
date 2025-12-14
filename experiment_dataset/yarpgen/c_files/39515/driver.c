#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2908295094U;
_Bool var_2 = (_Bool)0;
short var_8 = (short)-23559;
unsigned long long int var_15 = 15122665523282641668ULL;
int zero = 0;
short var_16 = (short)-26632;
unsigned char var_17 = (unsigned char)181;
unsigned short var_18 = (unsigned short)13673;
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
