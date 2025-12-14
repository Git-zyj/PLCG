#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25220;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)58;
signed char var_7 = (signed char)113;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_13 = 699395129;
long long int var_17 = -3162539637933062530LL;
int zero = 0;
short var_20 = (short)7300;
unsigned long long int var_21 = 7787433324041366715ULL;
void init() {
}

void checksum() {
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
