#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
long long int var_6 = -8893545456317828539LL;
unsigned long long int var_12 = 10069021343651946868ULL;
long long int var_16 = 4545943021849667027LL;
signed char var_17 = (signed char)-88;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6553779201662298749LL;
long long int var_20 = -1742569144521496782LL;
signed char var_21 = (signed char)40;
long long int var_22 = -5678364029986278353LL;
unsigned char arr_0 [25] [25] ;
signed char arr_1 [25] [25] ;
long long int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 5490078332313599811LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
