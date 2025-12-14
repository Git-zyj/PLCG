#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15774906809985262976ULL;
int var_6 = -414031596;
signed char var_7 = (signed char)-44;
_Bool var_8 = (_Bool)0;
long long int var_11 = -4486655169940857637LL;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-4910;
_Bool var_16 = (_Bool)1;
short var_17 = (short)29492;
unsigned short var_18 = (unsigned short)63749;
short var_19 = (short)-20288;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
