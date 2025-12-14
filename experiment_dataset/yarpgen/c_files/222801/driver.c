#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)125;
signed char var_4 = (signed char)-98;
short var_8 = (short)-31508;
unsigned long long int var_9 = 17484386093515729008ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6081249995771556976ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)10;
short var_18 = (short)22944;
unsigned short var_19 = (unsigned short)57620;
signed char var_20 = (signed char)67;
unsigned char var_21 = (unsigned char)209;
unsigned long long int var_22 = 14199636929160523123ULL;
unsigned char arr_0 [16] ;
unsigned char arr_1 [16] ;
unsigned char arr_3 [10] [10] ;
long long int arr_4 [10] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 6269344014205663031LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 7650124427583304374ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
