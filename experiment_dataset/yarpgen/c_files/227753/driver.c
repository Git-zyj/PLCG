#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5235869789254133133ULL;
long long int var_8 = -4044773130808669136LL;
short var_13 = (short)-5046;
int var_14 = -163135716;
unsigned char var_15 = (unsigned char)26;
signed char var_16 = (signed char)-72;
short var_17 = (short)-22294;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)61072;
unsigned int var_20 = 1597368555U;
unsigned int var_21 = 4230472284U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
