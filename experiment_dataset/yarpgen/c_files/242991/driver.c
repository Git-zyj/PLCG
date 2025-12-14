#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1565781717U;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)15502;
short var_8 = (short)-6418;
unsigned short var_9 = (unsigned short)10796;
short var_10 = (short)-28629;
unsigned short var_12 = (unsigned short)50011;
short var_13 = (short)-2747;
unsigned int var_14 = 2527026873U;
int var_15 = 298430003;
int var_18 = 147819781;
int zero = 0;
int var_19 = -1288837206;
unsigned char var_20 = (unsigned char)146;
void init() {
}

void checksum() {
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
