#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4154860049U;
short var_2 = (short)-24233;
short var_6 = (short)-13382;
int var_9 = -553077440;
short var_14 = (short)116;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -8138249613934513864LL;
long long int var_18 = -4621309798505931023LL;
void init() {
}

void checksum() {
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
