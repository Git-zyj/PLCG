#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5111649375421333205ULL;
long long int var_4 = -331637079385479687LL;
unsigned long long int var_5 = 7001449565738297577ULL;
unsigned int var_9 = 3286338684U;
int var_10 = 1018866978;
int zero = 0;
long long int var_12 = -6681815937779021343LL;
unsigned long long int var_13 = 7029697668106371724ULL;
unsigned int var_14 = 3834019735U;
unsigned long long int var_15 = 4949431905805077783ULL;
unsigned long long int var_16 = 10610926610202959368ULL;
unsigned long long int var_17 = 14874052532768465245ULL;
unsigned long long int arr_0 [22] [22] ;
long long int arr_1 [22] ;
unsigned long long int arr_7 [19] ;
long long int arr_3 [22] [22] ;
long long int arr_4 [22] ;
unsigned long long int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 13779716117748919322ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2792205539355373800LL : -1965619052299771977LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 16356732804421629596ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -5800055101365653808LL : 8403329960244012820LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 764888950879182745LL : -8439846850577644232LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 8490962823426211284ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
