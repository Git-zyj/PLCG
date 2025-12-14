#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22136;
unsigned char var_4 = (unsigned char)135;
unsigned short var_6 = (unsigned short)55043;
short var_9 = (short)17111;
short var_10 = (short)-22976;
_Bool var_12 = (_Bool)0;
long long int var_14 = 3478036573877000340LL;
short var_15 = (short)14059;
long long int var_16 = -2389201026883758827LL;
short var_18 = (short)-18093;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-15416;
unsigned short var_21 = (unsigned short)51633;
unsigned char var_22 = (unsigned char)238;
_Bool var_23 = (_Bool)0;
short arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (short)20812;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
