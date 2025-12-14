#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -861110467;
unsigned short var_2 = (unsigned short)18641;
unsigned short var_3 = (unsigned short)9988;
unsigned char var_4 = (unsigned char)18;
unsigned int var_5 = 4014122507U;
unsigned int var_6 = 2915855165U;
signed char var_7 = (signed char)-99;
short var_8 = (short)-13118;
unsigned char var_9 = (unsigned char)241;
unsigned char var_10 = (unsigned char)231;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)8146;
unsigned int var_15 = 224955779U;
int zero = 0;
unsigned char var_18 = (unsigned char)104;
int var_19 = 1138645348;
long long int var_20 = 1908377652580151888LL;
signed char var_21 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
