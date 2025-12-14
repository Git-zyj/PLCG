#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8864;
short var_2 = (short)30209;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3469570566U;
int var_7 = 258506183;
int zero = 0;
signed char var_10 = (signed char)-92;
_Bool var_11 = (_Bool)0;
int var_12 = -891633197;
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
