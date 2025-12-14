#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26366;
unsigned char var_4 = (unsigned char)17;
long long int var_5 = 5821597902774462010LL;
signed char var_7 = (signed char)106;
unsigned char var_9 = (unsigned char)195;
unsigned short var_10 = (unsigned short)20183;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 16575857774781527148ULL;
unsigned short var_15 = (unsigned short)22872;
signed char var_16 = (signed char)22;
short var_17 = (short)-16448;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
