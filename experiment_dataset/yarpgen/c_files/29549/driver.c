#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2008552124U;
int var_2 = 1199913241;
unsigned int var_3 = 430999431U;
unsigned short var_4 = (unsigned short)32856;
unsigned short var_5 = (unsigned short)21380;
long long int var_6 = -731039676367085740LL;
long long int var_11 = -8718344343736162618LL;
unsigned long long int var_12 = 12008486932931964235ULL;
unsigned int var_13 = 294351230U;
long long int var_15 = -9009428850255102581LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-7143;
unsigned char var_18 = (unsigned char)161;
signed char var_19 = (signed char)-27;
int zero = 0;
unsigned char var_20 = (unsigned char)67;
unsigned int var_21 = 1722392337U;
unsigned int var_22 = 2988887911U;
unsigned char arr_0 [16] ;
short arr_1 [16] ;
short arr_2 [16] ;
unsigned long long int arr_5 [25] ;
short arr_6 [25] ;
unsigned int arr_3 [16] ;
int arr_4 [16] ;
unsigned int arr_7 [25] ;
unsigned int arr_8 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-24262;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-16106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 11083424449379818770ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)13384;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2105122547U : 3843852298U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -859321543 : -1856306509;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 36887995U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 2904194246U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
