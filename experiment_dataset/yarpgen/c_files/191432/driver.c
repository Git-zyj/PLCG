#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)507;
long long int var_3 = 3575359997226295152LL;
int var_4 = 1669326582;
short var_7 = (short)5635;
unsigned long long int var_8 = 17584410040441378294ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)119;
short var_11 = (short)21237;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)233;
long long int var_14 = -2582480931800741360LL;
int var_15 = 1489457697;
int var_16 = 1051216900;
long long int var_17 = -4055079059781444287LL;
short var_18 = (short)-2328;
short var_19 = (short)-16549;
long long int arr_0 [17] [17] ;
_Bool arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 7091658612483755606LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
