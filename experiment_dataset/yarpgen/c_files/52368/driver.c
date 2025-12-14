#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10873029526500315887ULL;
long long int var_3 = 9053940182377999655LL;
unsigned short var_6 = (unsigned short)12403;
unsigned short var_7 = (unsigned short)44908;
unsigned long long int var_8 = 1146987702189572930ULL;
unsigned short var_12 = (unsigned short)7485;
unsigned short var_13 = (unsigned short)14559;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-25405;
unsigned char var_16 = (unsigned char)198;
unsigned short var_17 = (unsigned short)7861;
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
