#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3844829393U;
unsigned short var_1 = (unsigned short)10743;
unsigned char var_2 = (unsigned char)239;
unsigned int var_3 = 932903132U;
unsigned long long int var_4 = 7513181284618552222ULL;
signed char var_7 = (signed char)-106;
int var_8 = 1506711799;
int var_9 = 1221198664;
signed char var_10 = (signed char)69;
int zero = 0;
unsigned int var_11 = 2157992066U;
unsigned int var_12 = 1361630977U;
unsigned int var_13 = 1890364164U;
long long int var_14 = -5914626658761774568LL;
unsigned int var_15 = 454857152U;
unsigned int var_16 = 752449227U;
int var_17 = -1029664679;
long long int arr_3 [19] [19] ;
int arr_5 [19] [19] ;
long long int arr_8 [19] ;
int arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -7489148360723477601LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -1772752824;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -2825232992461371669LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = -1445518621;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
