#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = -517719531201996093LL;
unsigned short var_7 = (unsigned short)32918;
signed char var_9 = (signed char)79;
int zero = 0;
unsigned char var_12 = (unsigned char)26;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7144818076350689985LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 17834456956788639716ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14320616075062238590ULL;
long long int arr_0 [13] [13] ;
signed char arr_3 [13] ;
long long int arr_4 [13] [13] ;
long long int arr_6 [11] ;
unsigned short arr_8 [11] [11] ;
unsigned char arr_2 [13] ;
long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 5253119710467088459LL : -8570116118173721962LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 314299856525732113LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 1681652074370183197LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)4506;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -2603474599978724528LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
