#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5180;
int var_1 = -159828236;
long long int var_2 = 6616945548852936971LL;
unsigned short var_3 = (unsigned short)24062;
int var_6 = 1185945153;
int var_7 = 834599402;
short var_8 = (short)-29524;
int zero = 0;
unsigned char var_10 = (unsigned char)158;
signed char var_11 = (signed char)-47;
unsigned short var_12 = (unsigned short)6083;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
