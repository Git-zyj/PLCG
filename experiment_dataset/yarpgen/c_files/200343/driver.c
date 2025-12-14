#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1268804886;
unsigned int var_2 = 4181935866U;
unsigned short var_6 = (unsigned short)45348;
long long int var_8 = 5433807954179269785LL;
short var_12 = (short)31982;
short var_17 = (short)-17567;
signed char var_19 = (signed char)106;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 696123710U;
unsigned int var_22 = 728893146U;
long long int var_23 = 5837034720246107229LL;
int var_24 = -392659247;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
