#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23264;
long long int var_5 = -4361304617392032564LL;
signed char var_6 = (signed char)108;
signed char var_9 = (signed char)95;
short var_12 = (short)24041;
int zero = 0;
unsigned char var_13 = (unsigned char)63;
unsigned short var_14 = (unsigned short)55679;
unsigned int var_15 = 1676062607U;
unsigned char var_16 = (unsigned char)9;
unsigned char var_17 = (unsigned char)114;
long long int var_18 = 3209362354105415029LL;
unsigned int var_19 = 1103960711U;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
signed char arr_2 [14] ;
unsigned int arr_4 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] ;
unsigned int arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5475345519034416195ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 7566902761690471221ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2370652059U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 13759666902434582476ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 1822220337U;
}

void checksum() {
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
