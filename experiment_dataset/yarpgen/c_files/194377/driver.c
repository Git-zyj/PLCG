#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)93;
long long int var_4 = -1645909991096484647LL;
int var_5 = 499939156;
unsigned char var_6 = (unsigned char)134;
signed char var_7 = (signed char)12;
signed char var_8 = (signed char)109;
short var_9 = (short)13864;
signed char var_10 = (signed char)36;
unsigned char var_11 = (unsigned char)43;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)106;
unsigned long long int var_15 = 10381387431353419232ULL;
unsigned int var_16 = 2131156874U;
signed char var_17 = (signed char)62;
signed char var_18 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
