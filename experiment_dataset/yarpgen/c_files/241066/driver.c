#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8616711853491563204LL;
unsigned long long int var_1 = 3580518278416451794ULL;
unsigned char var_2 = (unsigned char)109;
unsigned char var_3 = (unsigned char)121;
unsigned int var_7 = 1627328241U;
unsigned long long int var_8 = 10037127644900186750ULL;
int var_10 = -1737395266;
long long int var_11 = -7332860360061470268LL;
unsigned short var_12 = (unsigned short)44400;
unsigned long long int var_13 = 6128657156441616932ULL;
unsigned int var_14 = 378664996U;
int zero = 0;
unsigned char var_16 = (unsigned char)69;
long long int var_17 = -6623944432060418522LL;
long long int var_18 = -1649565217686917057LL;
signed char var_19 = (signed char)-80;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)125;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
short arr_3 [22] ;
unsigned long long int arr_5 [17] ;
unsigned int arr_4 [22] ;
unsigned char arr_7 [17] ;
unsigned long long int arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-31979;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 11801665824157120231ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1445327497U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)76 : (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 18342579860014509168ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
