#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5591034523159181174ULL;
unsigned long long int var_6 = 7106101520441005833ULL;
long long int var_9 = -8953533267310956298LL;
int zero = 0;
unsigned int var_17 = 1225110041U;
unsigned long long int var_18 = 4766562002567937693ULL;
unsigned long long int var_19 = 15787963924820440449ULL;
unsigned short var_20 = (unsigned short)1945;
int var_21 = -1493560883;
_Bool arr_1 [16] ;
long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1751978030342495000LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
