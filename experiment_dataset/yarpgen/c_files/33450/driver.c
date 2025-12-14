#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8938466321529555477LL;
short var_10 = (short)2808;
short var_11 = (short)4801;
unsigned char var_17 = (unsigned char)59;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 382335241U;
signed char var_20 = (signed char)80;
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
