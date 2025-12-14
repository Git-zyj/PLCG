#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1085244451U;
short var_5 = (short)27117;
long long int var_9 = 8045678144790214848LL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 666105847U;
unsigned long long int var_13 = 843561663622606831ULL;
unsigned short var_15 = (unsigned short)37347;
short var_16 = (short)-22449;
int zero = 0;
signed char var_17 = (signed char)8;
signed char var_18 = (signed char)-88;
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
