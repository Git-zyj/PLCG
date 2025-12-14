#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
int var_1 = 655594280;
unsigned int var_2 = 3132390929U;
unsigned short var_6 = (unsigned short)15845;
int var_8 = 1931624046;
unsigned char var_9 = (unsigned char)29;
short var_10 = (short)12239;
long long int var_12 = -3931467755655379092LL;
short var_13 = (short)24771;
unsigned long long int var_14 = 10400487561828016409ULL;
long long int var_16 = -4698650866106262579LL;
long long int var_17 = -5099030753514251927LL;
unsigned long long int var_18 = 12988272741481274453ULL;
int zero = 0;
long long int var_19 = -2089754642261087014LL;
unsigned long long int var_20 = 15475877419555744420ULL;
int var_21 = 582393183;
short var_22 = (short)18683;
unsigned char arr_0 [14] ;
signed char arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 10680376404976681444ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
