#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -59877733;
unsigned int var_3 = 3939249699U;
unsigned int var_4 = 1354308522U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)219;
int var_7 = 1932110577;
short var_8 = (short)-31552;
signed char var_9 = (signed char)-115;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)29186;
unsigned int var_12 = 3877195317U;
unsigned char var_13 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
