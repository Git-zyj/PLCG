#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_11 = 1884706708U;
int zero = 0;
unsigned char var_17 = (unsigned char)156;
unsigned int var_18 = 518538735U;
int var_19 = -61665527;
signed char var_20 = (signed char)64;
unsigned char var_21 = (unsigned char)163;
unsigned short var_22 = (unsigned short)52852;
long long int var_23 = 4959299718340888375LL;
_Bool var_24 = (_Bool)0;
_Bool arr_1 [24] ;
signed char arr_2 [24] ;
long long int arr_5 [24] ;
long long int arr_3 [24] ;
signed char arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -4455261901932995861LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -8725406326584681113LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)126;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
