#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1074100291;
long long int var_4 = -1474761073130981865LL;
unsigned char var_5 = (unsigned char)82;
_Bool var_6 = (_Bool)0;
long long int var_8 = 4656413316823504711LL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)5725;
void init() {
}

void checksum() {
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
