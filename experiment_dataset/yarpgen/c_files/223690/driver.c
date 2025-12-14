#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3273626398005512409LL;
unsigned short var_2 = (unsigned short)63748;
unsigned int var_3 = 3790091445U;
short var_4 = (short)12821;
unsigned int var_5 = 3137716142U;
unsigned int var_6 = 3585024446U;
unsigned int var_7 = 2241280708U;
unsigned char var_8 = (unsigned char)72;
short var_9 = (short)20184;
unsigned char var_12 = (unsigned char)71;
int var_13 = 278315225;
signed char var_14 = (signed char)0;
int var_15 = 1596571664;
long long int var_16 = -5702347277327640657LL;
unsigned char var_17 = (unsigned char)82;
int var_19 = -1615139780;
int zero = 0;
unsigned short var_20 = (unsigned short)13088;
signed char var_21 = (signed char)-104;
unsigned char var_22 = (unsigned char)18;
signed char var_23 = (signed char)23;
_Bool var_24 = (_Bool)0;
short var_25 = (short)-31150;
short var_26 = (short)23407;
unsigned char var_27 = (unsigned char)183;
short var_28 = (short)-31072;
unsigned char arr_4 [21] ;
unsigned char arr_5 [21] [21] ;
short arr_8 [19] ;
unsigned short arr_12 [12] ;
unsigned char arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)17276;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (unsigned short)50108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (unsigned char)148;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
