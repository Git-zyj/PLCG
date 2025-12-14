#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3980;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 5233966232866475045ULL;
_Bool var_5 = (_Bool)0;
int var_8 = 177209130;
short var_9 = (short)18959;
unsigned char var_10 = (unsigned char)37;
int zero = 0;
unsigned int var_15 = 370169320U;
unsigned char var_16 = (unsigned char)130;
unsigned int var_17 = 454587977U;
void init() {
}

void checksum() {
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
