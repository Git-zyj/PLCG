#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)44832;
unsigned char var_7 = (unsigned char)218;
unsigned short var_8 = (unsigned short)4533;
unsigned char var_9 = (unsigned char)163;
unsigned long long int var_10 = 3794572914649649754ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1106802454;
unsigned int var_16 = 3128716307U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
