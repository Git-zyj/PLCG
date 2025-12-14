#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned long long int var_1 = 3168961423498185331ULL;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2930451253U;
long long int var_5 = 590607741909671343LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3101248356U;
long long int var_10 = -8963161823671615060LL;
long long int var_11 = 1173223847254091823LL;
int zero = 0;
unsigned int var_12 = 1387237936U;
unsigned int var_13 = 3032220774U;
short var_14 = (short)-22339;
unsigned int var_15 = 2503252975U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
