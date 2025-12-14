#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1271612422;
unsigned short var_6 = (unsigned short)64381;
_Bool var_12 = (_Bool)0;
short var_13 = (short)27690;
short var_14 = (short)27996;
unsigned int var_15 = 850138563U;
unsigned char var_17 = (unsigned char)184;
int zero = 0;
long long int var_19 = -6034662139358239328LL;
signed char var_20 = (signed char)-55;
signed char var_21 = (signed char)-12;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
