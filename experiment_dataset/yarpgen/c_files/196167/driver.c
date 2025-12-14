#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1045066769U;
int var_1 = -769576383;
signed char var_3 = (signed char)34;
unsigned char var_6 = (unsigned char)138;
_Bool var_7 = (_Bool)1;
unsigned char var_13 = (unsigned char)32;
int zero = 0;
unsigned char var_16 = (unsigned char)25;
short var_17 = (short)-30433;
short var_18 = (short)-3717;
int var_19 = -1012598818;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
