#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3446318303U;
short var_2 = (short)20278;
_Bool var_4 = (_Bool)1;
int var_5 = 1545985564;
unsigned short var_7 = (unsigned short)3531;
unsigned char var_8 = (unsigned char)49;
long long int var_10 = -839824522206373960LL;
int var_11 = 1921538297;
unsigned long long int var_12 = 17574156737299934168ULL;
int zero = 0;
unsigned int var_14 = 970538007U;
unsigned long long int var_15 = 13287096284142423546ULL;
short var_16 = (short)-3258;
unsigned long long int var_17 = 17042232334640294251ULL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7207531020356341964LL;
short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)1573;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2525125631863453531ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5783607697232553867LL : -5829340904146297790LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
