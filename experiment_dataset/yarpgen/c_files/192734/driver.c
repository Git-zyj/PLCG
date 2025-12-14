#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -978871941204056203LL;
unsigned long long int var_8 = 6347322388236369687ULL;
unsigned long long int var_10 = 727359215589152423ULL;
short var_11 = (short)14197;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16888459766159963959ULL;
short var_16 = (short)-1236;
signed char var_17 = (signed char)(-127 - 1);
int zero = 0;
int var_18 = -1238414012;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 4466936053155995687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
