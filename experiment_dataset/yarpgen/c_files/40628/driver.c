#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46376;
unsigned int var_1 = 507833611U;
long long int var_2 = -5397350747062270158LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)20333;
signed char var_8 = (signed char)-7;
unsigned char var_9 = (unsigned char)243;
_Bool var_10 = (_Bool)1;
long long int var_13 = 1480580922265898314LL;
int var_14 = -1179177009;
long long int var_15 = 8074210074473989676LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)15057;
void init() {
}

void checksum() {
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
