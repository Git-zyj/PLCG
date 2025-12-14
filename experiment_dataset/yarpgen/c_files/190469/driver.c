#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)58876;
long long int var_4 = -4263399424318479072LL;
unsigned char var_6 = (unsigned char)253;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 17504112236160189404ULL;
unsigned long long int var_14 = 8765008487922326988ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)1153;
unsigned char var_18 = (unsigned char)52;
unsigned long long int var_19 = 11544626801834270877ULL;
unsigned short arr_0 [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
signed char arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)63698;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13857001106262363360ULL : 1991475186466855915ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-40 : (signed char)-107;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
