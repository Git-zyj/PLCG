#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17875;
signed char var_1 = (signed char)90;
unsigned short var_5 = (unsigned short)54948;
unsigned short var_8 = (unsigned short)22666;
unsigned int var_9 = 2892193655U;
unsigned short var_10 = (unsigned short)35529;
short var_17 = (short)26047;
int var_18 = 1140287485;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
unsigned char var_21 = (unsigned char)164;
unsigned int var_22 = 4190453772U;
long long int arr_6 [22] [22] ;
short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = -4520722704164093852LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)26411;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
