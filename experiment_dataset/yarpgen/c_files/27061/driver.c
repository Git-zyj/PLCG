#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 744238441U;
_Bool var_6 = (_Bool)1;
int var_7 = -744121480;
long long int var_9 = -5277425815273796252LL;
int var_10 = 1832146479;
short var_14 = (short)22348;
signed char var_16 = (signed char)-38;
long long int var_17 = -4171258802642379514LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -1755513650317040623LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -471854566;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)2751;
short var_24 = (short)16301;
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
