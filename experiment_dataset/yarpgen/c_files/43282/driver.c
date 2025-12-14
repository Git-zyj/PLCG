#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2593004838U;
int var_5 = 964988874;
unsigned int var_6 = 3128657445U;
signed char var_7 = (signed char)-54;
signed char var_9 = (signed char)-88;
int zero = 0;
short var_12 = (short)31774;
int var_13 = 774913250;
unsigned short var_14 = (unsigned short)7674;
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
