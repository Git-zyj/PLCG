#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27452;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-43;
unsigned short var_6 = (unsigned short)22931;
unsigned int var_8 = 24575385U;
signed char var_11 = (signed char)-10;
int zero = 0;
short var_12 = (short)-28355;
unsigned short var_13 = (unsigned short)61917;
unsigned short var_14 = (unsigned short)29995;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
