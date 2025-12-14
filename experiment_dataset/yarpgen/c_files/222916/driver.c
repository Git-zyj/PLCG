#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
short var_1 = (short)-26188;
unsigned char var_2 = (unsigned char)241;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)33;
unsigned char var_6 = (unsigned char)180;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-28836;
unsigned char var_10 = (unsigned char)195;
signed char var_11 = (signed char)-3;
int var_12 = 1449058497;
int var_13 = -342429047;
int zero = 0;
short var_15 = (short)20148;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7920007718277864528LL;
unsigned short var_18 = (unsigned short)42947;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
