#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32651;
signed char var_3 = (signed char)124;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6965936075009457601ULL;
int var_6 = 1606954867;
unsigned long long int var_7 = 16779958941737431163ULL;
int var_8 = 1385731347;
unsigned long long int var_9 = 3024818603345095738ULL;
unsigned int var_11 = 3935064282U;
unsigned int var_13 = 3589482079U;
int zero = 0;
int var_14 = -1010136973;
unsigned int var_15 = 968111449U;
unsigned long long int var_16 = 10164634371254716104ULL;
int var_17 = 1683435941;
unsigned char var_18 = (unsigned char)111;
unsigned char var_19 = (unsigned char)49;
int arr_0 [24] ;
unsigned char arr_3 [24] [24] [24] ;
long long int arr_5 [21] ;
unsigned long long int arr_9 [21] [21] [21] [21] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 879911957;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2189121740462123827LL : 7997788733925174658LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 13753487775409025492ULL : 11630976207088185260ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7381326716207038526ULL : 8126689526269928382ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
