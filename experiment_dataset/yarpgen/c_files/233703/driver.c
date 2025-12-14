#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15434154275332947110ULL;
unsigned char var_2 = (unsigned char)113;
long long int var_4 = -2857796366981182744LL;
unsigned short var_5 = (unsigned short)36490;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-4440;
signed char var_9 = (signed char)65;
signed char var_13 = (signed char)99;
unsigned char var_14 = (unsigned char)106;
unsigned char var_15 = (unsigned char)53;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)33040;
unsigned int var_19 = 990352642U;
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
