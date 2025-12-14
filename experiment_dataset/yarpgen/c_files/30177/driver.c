#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2479938203U;
unsigned short var_1 = (unsigned short)6347;
signed char var_3 = (signed char)-76;
int var_5 = -113063074;
short var_11 = (short)-21334;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)36;
signed char var_19 = (signed char)75;
int var_20 = 1511263308;
unsigned short var_21 = (unsigned short)13832;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
