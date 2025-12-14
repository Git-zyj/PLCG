#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24952;
short var_2 = (short)-4256;
long long int var_3 = -917120761865913429LL;
signed char var_13 = (signed char)54;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-4724;
short var_18 = (short)-18287;
signed char var_19 = (signed char)-97;
void init() {
}

void checksum() {
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
