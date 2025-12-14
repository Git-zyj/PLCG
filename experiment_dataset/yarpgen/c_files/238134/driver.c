#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1636343029;
unsigned short var_4 = (unsigned short)42492;
unsigned short var_7 = (unsigned short)20873;
unsigned long long int var_8 = 11782732090777162306ULL;
long long int var_10 = 4078724255786080016LL;
int zero = 0;
unsigned int var_11 = 2248967994U;
short var_12 = (short)-16944;
unsigned long long int var_13 = 12653429422502263872ULL;
unsigned int var_14 = 300557272U;
int arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned int arr_2 [12] ;
long long int arr_4 [21] [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1547858934;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2357602930U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 1586544596612783551LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)68;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
