#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
unsigned short var_1 = (unsigned short)63426;
unsigned int var_2 = 3246078184U;
int var_4 = -2097612390;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4253219094U;
unsigned char var_8 = (unsigned char)86;
short var_9 = (short)-22123;
unsigned char var_10 = (unsigned char)138;
unsigned char var_11 = (unsigned char)163;
unsigned long long int var_13 = 2341403286744921935ULL;
short var_14 = (short)-27916;
unsigned int var_17 = 1568365556U;
unsigned char var_18 = (unsigned char)240;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)25581;
unsigned int var_21 = 1169953981U;
void init() {
}

void checksum() {
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
