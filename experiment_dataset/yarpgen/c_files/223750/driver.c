#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 894169502U;
unsigned char var_2 = (unsigned char)57;
_Bool var_4 = (_Bool)1;
long long int var_5 = -8371181615495706935LL;
short var_7 = (short)18608;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)318;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)57774;
unsigned int var_21 = 1331021922U;
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
