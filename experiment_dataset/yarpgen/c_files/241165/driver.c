#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51270;
unsigned short var_2 = (unsigned short)18238;
signed char var_4 = (signed char)-45;
unsigned short var_5 = (unsigned short)58266;
signed char var_6 = (signed char)96;
signed char var_8 = (signed char)2;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)58939;
unsigned short var_12 = (unsigned short)260;
int zero = 0;
unsigned short var_13 = (unsigned short)54175;
unsigned short var_14 = (unsigned short)47922;
unsigned short var_15 = (unsigned short)18764;
unsigned short var_16 = (unsigned short)61062;
signed char var_17 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
