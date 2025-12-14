#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
short var_1 = (short)29344;
unsigned char var_2 = (unsigned char)61;
unsigned short var_4 = (unsigned short)56183;
unsigned int var_5 = 1460207105U;
unsigned long long int var_6 = 9878370956079268606ULL;
unsigned int var_7 = 794167643U;
long long int var_9 = -8494994378964691804LL;
int zero = 0;
unsigned int var_10 = 359287306U;
short var_11 = (short)3063;
unsigned short var_12 = (unsigned short)40880;
unsigned short var_13 = (unsigned short)6888;
long long int var_14 = -8547261321601716382LL;
_Bool var_15 = (_Bool)0;
unsigned short arr_0 [21] ;
int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)45753;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1769043454;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
