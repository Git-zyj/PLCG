#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -362997939770023194LL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)34508;
unsigned char var_4 = (unsigned char)184;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-5307;
signed char var_9 = (signed char)19;
unsigned int var_10 = 1174894941U;
int zero = 0;
short var_11 = (short)-15698;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
