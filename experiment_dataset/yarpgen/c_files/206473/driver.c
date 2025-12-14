#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-121;
int var_9 = 270682930;
short var_16 = (short)11784;
int zero = 0;
signed char var_19 = (signed char)37;
short var_20 = (short)1264;
unsigned short var_21 = (unsigned short)14994;
void init() {
}

void checksum() {
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
