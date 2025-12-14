#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1389993819142413241ULL;
long long int var_1 = 3277825277982155070LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)21726;
short var_4 = (short)-4164;
_Bool var_6 = (_Bool)0;
short var_7 = (short)11206;
long long int var_8 = -3976007972117472396LL;
long long int var_9 = 1893035690555898739LL;
int zero = 0;
short var_13 = (short)27776;
unsigned long long int var_14 = 2245397057135886273ULL;
int var_15 = 1953106461;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6994030389093943536LL;
_Bool var_18 = (_Bool)0;
short var_19 = (short)4564;
unsigned int arr_6 [16] ;
int arr_8 [25] ;
unsigned short arr_9 [25] [25] [25] ;
signed char arr_3 [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1192089107U : 277817270U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -690926023 : 100286610;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)23937;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-41 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29005 : (unsigned short)39029;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
