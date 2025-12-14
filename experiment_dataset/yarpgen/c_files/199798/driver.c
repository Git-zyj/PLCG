#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 193402926U;
int var_1 = 1425499749;
unsigned int var_2 = 3520343241U;
unsigned short var_3 = (unsigned short)43480;
signed char var_7 = (signed char)-114;
unsigned char var_12 = (unsigned char)247;
short var_14 = (short)23048;
long long int var_16 = -5060548013318196420LL;
int zero = 0;
unsigned short var_18 = (unsigned short)41790;
signed char var_19 = (signed char)-66;
unsigned short var_20 = (unsigned short)36600;
unsigned char var_21 = (unsigned char)203;
unsigned long long int var_22 = 8560588075900157843ULL;
unsigned char var_23 = (unsigned char)209;
unsigned short var_24 = (unsigned short)13719;
_Bool arr_0 [22] ;
long long int arr_2 [22] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -276544783473644779LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)237;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
