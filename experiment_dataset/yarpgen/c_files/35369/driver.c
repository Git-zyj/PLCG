#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_6 = -1021001776;
short var_7 = (short)-1609;
short var_8 = (short)2773;
short var_10 = (short)-17490;
int var_14 = 1117928431;
int var_15 = -1321353983;
int zero = 0;
short var_16 = (short)-8649;
short var_17 = (short)-4675;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
