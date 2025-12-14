#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)29737;
_Bool var_14 = (_Bool)1;
long long int var_18 = -2551485976257022874LL;
int zero = 0;
unsigned long long int var_20 = 14584083236610184203ULL;
long long int var_21 = -751820974081664806LL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)156;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 3802473791924373214ULL;
unsigned long long int var_27 = 10667065537611243026ULL;
long long int arr_0 [25] ;
_Bool arr_2 [25] ;
unsigned long long int arr_3 [25] ;
unsigned short arr_8 [12] [12] ;
_Bool arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1269347505381128283LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 17452034230743638681ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)13037;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
