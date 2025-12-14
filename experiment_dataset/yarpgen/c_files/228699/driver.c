#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)110;
unsigned char var_7 = (unsigned char)55;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 17595031975699689124ULL;
short var_11 = (short)-25011;
signed char var_12 = (signed char)37;
unsigned short var_14 = (unsigned short)36549;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)14353;
unsigned int var_18 = 3860465419U;
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
