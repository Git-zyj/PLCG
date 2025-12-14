#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-90;
unsigned char var_6 = (unsigned char)186;
signed char var_9 = (signed char)83;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 526478038U;
int zero = 0;
short var_17 = (short)1074;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
