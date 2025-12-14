#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)25539;
long long int var_4 = 1433669885954052531LL;
long long int var_5 = 1916508469113324240LL;
unsigned int var_6 = 627663299U;
unsigned char var_7 = (unsigned char)124;
long long int var_9 = -1084746957178718768LL;
long long int var_11 = 4632795920552463017LL;
unsigned char var_12 = (unsigned char)23;
long long int var_13 = -8599116693891817788LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)12191;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)42252;
int var_19 = -1768091118;
unsigned long long int var_20 = 1089200413401758853ULL;
unsigned short var_21 = (unsigned short)38865;
long long int arr_1 [21] ;
_Bool arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -7029436862428074958LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
