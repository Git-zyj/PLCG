#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)20020;
short var_5 = (short)-28703;
signed char var_7 = (signed char)-51;
int var_8 = 819074032;
long long int var_12 = 5633281237520774705LL;
long long int var_15 = 542234349811313271LL;
signed char var_17 = (signed char)68;
int zero = 0;
long long int var_20 = 7675658861160324810LL;
unsigned short var_21 = (unsigned short)54432;
void init() {
}

void checksum() {
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
