#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_5 = (unsigned short)57245;
unsigned short var_8 = (unsigned short)59710;
long long int var_11 = 8847530442403203042LL;
short var_16 = (short)9963;
signed char var_17 = (signed char)116;
int zero = 0;
long long int var_18 = 626656611899900590LL;
long long int var_19 = -2855538338636695792LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2592975415U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
