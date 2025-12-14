#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16899204010321374953ULL;
signed char var_3 = (signed char)-37;
unsigned int var_6 = 3308117608U;
long long int var_8 = 6503049079646181294LL;
int zero = 0;
unsigned short var_11 = (unsigned short)9577;
long long int var_12 = 5888523437994691996LL;
int var_13 = 826495961;
unsigned int var_14 = 530915193U;
int var_15 = -118533500;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)169;
unsigned int var_18 = 4178560507U;
long long int var_19 = -8370572392729909421LL;
int var_20 = -710819754;
unsigned char arr_0 [21] ;
unsigned int arr_3 [21] ;
unsigned int arr_5 [21] [21] [21] ;
short arr_11 [25] [25] ;
unsigned long long int arr_12 [25] ;
long long int arr_15 [25] [25] [25] ;
unsigned short arr_10 [18] ;
long long int arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2565969850U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2271872924U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (short)3318;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = 764657876886740955ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -6516096949913575571LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned short)15618;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = -3698769041005404738LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
