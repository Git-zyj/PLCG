#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1099418399U;
unsigned short var_3 = (unsigned short)45191;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 16762875257069241339ULL;
unsigned int var_9 = 391357722U;
unsigned short var_10 = (unsigned short)36124;
unsigned long long int var_11 = 6836890757049262536ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10043518812397734724ULL;
long long int var_15 = -9189451609950922466LL;
unsigned long long int var_16 = 1106537666424438212ULL;
unsigned char arr_0 [20] ;
unsigned long long int arr_2 [20] [20] ;
unsigned long long int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 12076583049623848078ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 13046961501132283316ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
