#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
unsigned short var_2 = (unsigned short)18735;
long long int var_6 = -1721920862314829479LL;
_Bool var_7 = (_Bool)1;
int var_10 = -1817338264;
long long int var_13 = 1296940688637428441LL;
unsigned short var_16 = (unsigned short)13152;
long long int var_17 = 4690224133070663797LL;
int zero = 0;
short var_18 = (short)32172;
unsigned int var_19 = 993103875U;
unsigned char var_20 = (unsigned char)109;
unsigned long long int var_21 = 4109094742169860725ULL;
short var_22 = (short)-2209;
_Bool var_23 = (_Bool)1;
int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_3 [21] ;
_Bool arr_4 [21] ;
unsigned char arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 202441568;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)4677;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 698740497264963329ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)108;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
