#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63177;
long long int var_4 = -5356843545763075221LL;
long long int var_6 = 6533414544527320996LL;
long long int var_7 = -4661571619526521590LL;
unsigned short var_9 = (unsigned short)16854;
int zero = 0;
long long int var_10 = 6244877417250396151LL;
long long int var_11 = -3620400305479006824LL;
long long int var_12 = 7318436870672724656LL;
long long int arr_5 [18] [18] ;
long long int arr_8 [18] [18] [18] ;
long long int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3033209424814401000LL : -2439712727892511760LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -557565298209385393LL : 3081724318253371153LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -8589906222871780343LL : -8811485249065958805LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
