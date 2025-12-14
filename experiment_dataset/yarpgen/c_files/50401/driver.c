#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15903;
signed char var_1 = (signed char)-6;
unsigned int var_2 = 618241079U;
signed char var_3 = (signed char)70;
short var_6 = (short)-5205;
unsigned int var_8 = 997976062U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)155;
signed char var_12 = (signed char)91;
int var_13 = 639120203;
int zero = 0;
signed char var_14 = (signed char)-28;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4908344254476561233LL;
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
