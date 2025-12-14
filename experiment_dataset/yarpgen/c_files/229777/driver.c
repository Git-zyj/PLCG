#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6365617960220068356ULL;
signed char var_5 = (signed char)118;
unsigned short var_6 = (unsigned short)16441;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 11287438560747909026ULL;
long long int var_11 = 7843562108552136801LL;
unsigned short var_12 = (unsigned short)17210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
