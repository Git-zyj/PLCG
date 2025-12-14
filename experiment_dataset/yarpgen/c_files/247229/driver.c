#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1047527612;
long long int var_3 = 2607352101849092892LL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)142;
unsigned long long int var_13 = 4897201477159736910ULL;
long long int var_19 = -8833984381223314703LL;
int zero = 0;
long long int var_20 = 4909047386845021553LL;
int var_21 = -678921635;
unsigned long long int var_22 = 11222400058982942910ULL;
long long int var_23 = -2906667989945537417LL;
unsigned char var_24 = (unsigned char)174;
unsigned int arr_0 [20] ;
unsigned char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2142061172U : 1580933830U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)109 : (unsigned char)75;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
