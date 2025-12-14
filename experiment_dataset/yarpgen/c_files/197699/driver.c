#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1679924414U;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1403433932U;
unsigned int var_3 = 634685468U;
unsigned int var_4 = 15681640U;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)46;
long long int var_9 = -5356691161425679846LL;
signed char var_10 = (signed char)8;
signed char var_11 = (signed char)-25;
unsigned int var_12 = 3991488223U;
int zero = 0;
unsigned int var_13 = 543459619U;
signed char var_14 = (signed char)-60;
short var_15 = (short)17625;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)58816;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
