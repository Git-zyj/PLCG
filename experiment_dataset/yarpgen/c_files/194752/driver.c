#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29431;
int var_4 = -1903778067;
short var_6 = (short)16319;
short var_7 = (short)-32140;
int var_9 = 1373633761;
unsigned char var_10 = (unsigned char)113;
unsigned long long int var_11 = 3034714602970745285ULL;
unsigned long long int var_12 = 15459846978177161684ULL;
unsigned short var_15 = (unsigned short)20164;
int zero = 0;
unsigned int var_16 = 3702217696U;
unsigned short var_17 = (unsigned short)62721;
signed char var_18 = (signed char)46;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
