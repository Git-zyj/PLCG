#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4176680913U;
unsigned long long int var_1 = 2463578112556039544ULL;
unsigned long long int var_2 = 13041395629701353320ULL;
long long int var_3 = 5128369631727695041LL;
unsigned long long int var_4 = 4134719117886744669ULL;
unsigned long long int var_5 = 9589337538620812803ULL;
unsigned char var_7 = (unsigned char)20;
long long int var_9 = -6882870681582443527LL;
int zero = 0;
long long int var_12 = -846080053193677303LL;
unsigned short var_13 = (unsigned short)190;
long long int var_14 = -6381114232676173115LL;
long long int var_15 = 1058950667449668846LL;
long long int var_16 = 2810654618174854661LL;
unsigned long long int var_17 = 16141609158801726373ULL;
unsigned int arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1430361958U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1162365163U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 7743960206756128538ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 59607672U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
