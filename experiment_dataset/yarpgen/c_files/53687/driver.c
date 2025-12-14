#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15185421162140824068ULL;
short var_1 = (short)29823;
long long int var_2 = -3578403689158174505LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)101;
int var_5 = -277397497;
signed char var_6 = (signed char)63;
unsigned short var_7 = (unsigned short)38718;
unsigned long long int var_9 = 11791833414141770288ULL;
int zero = 0;
unsigned long long int var_10 = 13533744257101669229ULL;
short var_11 = (short)-26915;
int var_12 = 908311235;
unsigned int var_13 = 1504022580U;
long long int var_14 = -9062925940895968778LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
