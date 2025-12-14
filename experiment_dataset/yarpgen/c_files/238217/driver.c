#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
short var_1 = (short)3245;
_Bool var_3 = (_Bool)1;
int var_6 = 1462554839;
long long int var_8 = 2470903516944516066LL;
unsigned short var_10 = (unsigned short)28275;
int zero = 0;
unsigned char var_11 = (unsigned char)194;
long long int var_12 = 7602083975655100649LL;
short var_13 = (short)9384;
long long int var_14 = -8339970041158714456LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 16724637562031719015ULL;
long long int arr_1 [17] [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -913160423157100723LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)110;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
