#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47465;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 912291568U;
short var_4 = (short)-6878;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-9313;
unsigned short var_11 = (unsigned short)5240;
int zero = 0;
unsigned short var_12 = (unsigned short)9204;
unsigned short var_13 = (unsigned short)9441;
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
