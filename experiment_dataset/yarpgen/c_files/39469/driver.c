#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)63207;
unsigned short var_2 = (unsigned short)16147;
unsigned long long int var_3 = 9422514968119578409ULL;
unsigned short var_4 = (unsigned short)18717;
signed char var_5 = (signed char)114;
unsigned short var_6 = (unsigned short)39800;
unsigned long long int var_7 = 11563133237169272476ULL;
unsigned short var_8 = (unsigned short)43712;
signed char var_9 = (signed char)62;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 2073209433;
unsigned long long int var_12 = 16219840954879083411ULL;
int var_13 = 526558355;
signed char var_14 = (signed char)52;
unsigned long long int var_15 = 17834273975324908597ULL;
unsigned short var_16 = (unsigned short)50961;
int var_17 = -897232135;
unsigned long long int var_18 = 12109348327796777791ULL;
unsigned long long int var_19 = 16066956402571414766ULL;
unsigned long long int var_20 = 12425679454775719207ULL;
signed char var_21 = (signed char)-24;
unsigned long long int var_22 = 9411164036198355056ULL;
int arr_1 [18] [18] ;
signed char arr_3 [18] ;
unsigned short arr_7 [18] [18] ;
signed char arr_10 [18] ;
unsigned long long int arr_5 [18] ;
signed char arr_6 [18] ;
unsigned char arr_11 [18] ;
_Bool arr_12 [18] ;
_Bool arr_13 [18] [18] ;
unsigned short arr_16 [18] [18] [18] ;
_Bool arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -1827254920;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)52379;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15145805887114137057ULL : 3727527117096525399ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-32 : (signed char)38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)168 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)10172 : (unsigned short)21817;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
