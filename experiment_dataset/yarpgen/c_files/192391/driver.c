#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
signed char var_2 = (signed char)111;
unsigned char var_3 = (unsigned char)142;
int var_6 = 575695310;
long long int var_7 = -4648028196379835953LL;
_Bool var_9 = (_Bool)0;
int var_12 = -1677613700;
int zero = 0;
signed char var_19 = (signed char)59;
unsigned short var_20 = (unsigned short)14814;
unsigned char var_21 = (unsigned char)240;
signed char var_22 = (signed char)15;
int var_23 = -448740146;
_Bool var_24 = (_Bool)1;
unsigned long long int arr_0 [13] ;
short arr_1 [13] [13] ;
signed char arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2866591529568923562ULL : 9219517517788127709ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5093;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)55 : (signed char)-48;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
