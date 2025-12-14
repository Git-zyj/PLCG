#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
signed char var_1 = (signed char)-64;
unsigned short var_2 = (unsigned short)26780;
unsigned short var_4 = (unsigned short)56800;
unsigned char var_6 = (unsigned char)67;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13626915770574583791ULL;
int var_11 = -2077323594;
unsigned long long int var_12 = 2691445029331161646ULL;
unsigned char var_13 = (unsigned char)67;
long long int var_14 = -1480158862350350211LL;
int zero = 0;
unsigned short var_15 = (unsigned short)58363;
short var_16 = (short)73;
unsigned int var_17 = 2846962959U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)21980;
long long int var_20 = 5740870619881536614LL;
unsigned long long int var_21 = 15181295240468132980ULL;
unsigned long long int var_22 = 17803032745784427570ULL;
unsigned short var_23 = (unsigned short)37027;
long long int arr_1 [20] ;
unsigned short arr_6 [20] [20] [20] [20] ;
long long int arr_11 [10] ;
int arr_4 [20] [20] ;
signed char arr_9 [17] ;
unsigned char arr_12 [10] [10] ;
unsigned long long int arr_13 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8235460528798136166LL : 3404832815828416353LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)47854 : (unsigned short)17756;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 5952842595819076765LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -123119468 : 2047336112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 10403936336684865012ULL;
}

void checksum() {
    hash(&seed, var_15);
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
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
