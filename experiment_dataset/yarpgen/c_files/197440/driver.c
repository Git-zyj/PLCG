#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2915;
unsigned short var_1 = (unsigned short)4152;
signed char var_2 = (signed char)-127;
int var_3 = -663640275;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)16;
int var_9 = 750891920;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = 243362584;
unsigned char var_14 = (unsigned char)238;
short var_15 = (short)15137;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
