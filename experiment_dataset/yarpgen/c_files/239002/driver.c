#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16425;
unsigned char var_5 = (unsigned char)249;
unsigned short var_7 = (unsigned short)56507;
unsigned long long int var_11 = 7956278233704341082ULL;
unsigned char var_12 = (unsigned char)36;
long long int var_14 = 4759856212770853277LL;
unsigned long long int var_17 = 12931084794698997271ULL;
int zero = 0;
unsigned long long int var_18 = 16023031440266827033ULL;
unsigned char var_19 = (unsigned char)200;
unsigned short var_20 = (unsigned short)45820;
unsigned long long int var_21 = 9707826021188466303ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 11209797899108558437ULL;
unsigned long long int arr_2 [25] ;
unsigned short arr_3 [25] ;
unsigned long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 11794946803727462611ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)15624;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 12312462004712698912ULL : 9800258338485193195ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
