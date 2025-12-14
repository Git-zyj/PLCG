#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29107;
unsigned char var_4 = (unsigned char)119;
signed char var_6 = (signed char)3;
unsigned char var_7 = (unsigned char)226;
_Bool var_8 = (_Bool)1;
short var_11 = (short)721;
long long int var_12 = 4798547713093946751LL;
int zero = 0;
unsigned long long int var_13 = 15910802879348016800ULL;
unsigned char var_14 = (unsigned char)123;
long long int var_15 = -6755039332628577835LL;
unsigned long long int var_16 = 3197156656461944490ULL;
unsigned short var_17 = (unsigned short)38919;
short arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-187;
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
