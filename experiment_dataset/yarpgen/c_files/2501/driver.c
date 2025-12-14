#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)62;
unsigned char var_4 = (unsigned char)166;
short var_8 = (short)-11030;
short var_9 = (short)-2096;
short var_10 = (short)14544;
unsigned short var_15 = (unsigned short)1681;
unsigned long long int var_16 = 1836839700018490135ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)27;
unsigned int var_19 = 2366229648U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
