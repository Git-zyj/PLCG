#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)20148;
signed char var_8 = (signed char)98;
signed char var_10 = (signed char)-99;
unsigned long long int var_11 = 11827662811523927928ULL;
long long int var_14 = -3911270704427420742LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 1900348295770499616ULL;
signed char var_17 = (signed char)101;
int zero = 0;
long long int var_20 = -2659621271559311103LL;
short var_21 = (short)-27962;
unsigned int var_22 = 2177842424U;
int var_23 = -399863211;
short var_24 = (short)11189;
unsigned long long int var_25 = 10737383478500944929ULL;
long long int var_26 = 279294169309662751LL;
unsigned char var_27 = (unsigned char)159;
unsigned short var_28 = (unsigned short)62617;
unsigned long long int var_29 = 8871536755621115342ULL;
unsigned char var_30 = (unsigned char)43;
int arr_1 [10] ;
int arr_3 [18] [18] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -308963588;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 639286894 : -366804300;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)5;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
