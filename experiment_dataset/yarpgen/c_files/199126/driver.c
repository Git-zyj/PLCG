#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)0;
signed char var_1 = (signed char)101;
unsigned short var_3 = (unsigned short)43896;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1198905884U;
signed char var_6 = (signed char)-19;
unsigned short var_8 = (unsigned short)20140;
unsigned char var_9 = (unsigned char)202;
int zero = 0;
unsigned char var_11 = (unsigned char)77;
short var_12 = (short)-29982;
short var_13 = (short)24850;
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
