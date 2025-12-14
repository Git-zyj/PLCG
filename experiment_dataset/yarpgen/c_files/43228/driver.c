#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -658792592;
_Bool var_5 = (_Bool)0;
int var_6 = 2035782168;
unsigned int var_7 = 3604911915U;
unsigned char var_10 = (unsigned char)188;
unsigned short var_14 = (unsigned short)1561;
int zero = 0;
long long int var_17 = 6978887008718889904LL;
short var_18 = (short)-15462;
unsigned char var_19 = (unsigned char)157;
int var_20 = -1536058994;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
