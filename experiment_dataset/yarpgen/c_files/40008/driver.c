#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13652418442298759607ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6866698028510392947ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)49452;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)46834;
int zero = 0;
unsigned long long int var_14 = 10993373986164709149ULL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)165;
int var_17 = -961944160;
long long int var_18 = -4146424921314965328LL;
long long int var_19 = 3983725889087136807LL;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 8748457249934899752ULL : 9655077101540852990ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 699403909775944982ULL : 13865450465465805416ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 4497380090462376735ULL : 2888777015095539044ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
