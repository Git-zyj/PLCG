#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14035;
int var_4 = 1506333221;
long long int var_7 = -6607389400607853955LL;
short var_9 = (short)1787;
signed char var_11 = (signed char)-24;
signed char var_13 = (signed char)7;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-22;
unsigned int var_17 = 913332763U;
signed char var_18 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
