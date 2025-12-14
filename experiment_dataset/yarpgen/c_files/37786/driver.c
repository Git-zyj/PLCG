#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -975408662;
int var_1 = -1411678540;
short var_2 = (short)21802;
unsigned long long int var_3 = 14364607675693743485ULL;
unsigned long long int var_5 = 2286001040657719366ULL;
int var_6 = 2098207821;
int var_7 = 861694168;
int zero = 0;
long long int var_16 = 5011692402812489710LL;
unsigned int var_17 = 53853561U;
unsigned short var_18 = (unsigned short)32313;
short arr_1 [21] ;
int arr_3 [21] ;
unsigned long long int arr_6 [21] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-11799;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1898621694;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 8220223845819513161ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -530493021;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
