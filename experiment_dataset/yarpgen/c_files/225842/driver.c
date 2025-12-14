#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
long long int var_2 = -664641381033727070LL;
signed char var_3 = (signed char)16;
short var_4 = (short)-28186;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)51;
unsigned char var_8 = (unsigned char)236;
unsigned char var_9 = (unsigned char)5;
signed char var_11 = (signed char)21;
int zero = 0;
short var_12 = (short)22297;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1671712691U;
_Bool var_15 = (_Bool)0;
signed char arr_3 [17] ;
unsigned short arr_5 [17] [17] ;
short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)36455;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)19046 : (short)-27452;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
