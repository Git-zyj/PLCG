#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25260;
signed char var_1 = (signed char)-41;
short var_7 = (short)12249;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-2758;
unsigned int var_15 = 2853904835U;
int zero = 0;
unsigned int var_17 = 3633204578U;
unsigned short var_18 = (unsigned short)34057;
unsigned short var_19 = (unsigned short)13078;
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
