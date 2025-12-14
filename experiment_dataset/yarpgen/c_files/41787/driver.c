#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 30755714U;
unsigned char var_1 = (unsigned char)146;
int var_3 = -775505399;
unsigned int var_4 = 3330050929U;
short var_7 = (short)30447;
unsigned int var_8 = 917285297U;
short var_9 = (short)19521;
unsigned char var_11 = (unsigned char)204;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)22;
int var_14 = 1424386147;
long long int var_15 = -173881360836937916LL;
int var_16 = -788968657;
unsigned short var_17 = (unsigned short)15712;
unsigned char var_18 = (unsigned char)89;
_Bool var_19 = (_Bool)0;
unsigned long long int arr_0 [21] ;
_Bool arr_1 [21] ;
unsigned char arr_5 [21] ;
int arr_2 [21] ;
unsigned char arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 8689271074566164305ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1924395239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)156;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
