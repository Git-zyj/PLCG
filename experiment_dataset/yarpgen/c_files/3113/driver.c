#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)25146;
unsigned char var_2 = (unsigned char)33;
_Bool var_4 = (_Bool)0;
long long int var_7 = -8987323501096817762LL;
unsigned int var_9 = 1773943705U;
unsigned long long int var_14 = 2790724718412422983ULL;
unsigned short var_17 = (unsigned short)19843;
int zero = 0;
unsigned long long int var_19 = 2398531607780484306ULL;
unsigned int var_20 = 3540727917U;
unsigned char var_21 = (unsigned char)227;
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
