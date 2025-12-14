#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50807;
unsigned char var_1 = (unsigned char)241;
unsigned long long int var_3 = 708278485043091812ULL;
unsigned long long int var_4 = 8965836800410728510ULL;
signed char var_6 = (signed char)-40;
unsigned int var_11 = 2086936097U;
unsigned char var_12 = (unsigned char)100;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)27;
long long int var_18 = 7713440789014406812LL;
int var_19 = 1118419674;
long long int var_20 = -5516246146833786472LL;
unsigned long long int var_21 = 16244031560052465769ULL;
unsigned char var_22 = (unsigned char)202;
unsigned short var_23 = (unsigned short)22910;
int arr_0 [20] ;
short arr_1 [20] ;
unsigned short arr_3 [18] ;
signed char arr_4 [18] [18] ;
unsigned long long int arr_5 [18] ;
unsigned int arr_7 [18] ;
unsigned int arr_8 [18] [18] ;
int arr_2 [20] [20] ;
long long int arr_6 [18] ;
signed char arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1056123666;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-4536;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)57502;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 10277997562075148109ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2872614082U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 57308899U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1675202166;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 961270867707765863LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (signed char)107;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
