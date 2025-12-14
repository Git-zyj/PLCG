#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1130201529;
int var_1 = 1630460135;
unsigned short var_2 = (unsigned short)55801;
unsigned short var_3 = (unsigned short)37791;
int var_5 = -1168977176;
signed char var_6 = (signed char)60;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)13204;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
