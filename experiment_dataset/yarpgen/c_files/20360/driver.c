#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
long long int var_3 = -4432753914706702472LL;
signed char var_6 = (signed char)46;
unsigned short var_8 = (unsigned short)55943;
unsigned long long int var_11 = 16891754731691188179ULL;
unsigned short var_12 = (unsigned short)55713;
short var_14 = (short)-5030;
long long int var_16 = -6700379286907547388LL;
int zero = 0;
signed char var_18 = (signed char)-107;
unsigned long long int var_19 = 70768129100415578ULL;
unsigned int var_20 = 2416941541U;
signed char var_21 = (signed char)103;
unsigned short var_22 = (unsigned short)16834;
signed char arr_0 [12] ;
signed char arr_2 [12] ;
unsigned int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3310390534U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
