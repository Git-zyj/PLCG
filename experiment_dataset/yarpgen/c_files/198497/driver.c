#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)187;
signed char var_3 = (signed char)77;
unsigned int var_4 = 375600111U;
unsigned short var_7 = (unsigned short)41373;
short var_9 = (short)-8401;
unsigned int var_10 = 4073381676U;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)18006;
unsigned int var_13 = 2392875356U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
