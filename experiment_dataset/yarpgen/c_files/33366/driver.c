#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2875461958952131203LL;
long long int var_3 = -8279988401612911065LL;
unsigned char var_4 = (unsigned char)110;
unsigned long long int var_6 = 6875824188351146670ULL;
long long int var_7 = 28566739207383727LL;
int zero = 0;
unsigned char var_10 = (unsigned char)55;
long long int var_11 = 728752796283852198LL;
unsigned long long int var_12 = 11434779716430090569ULL;
unsigned long long int var_13 = 10868206112724161556ULL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 7036641197133253699ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 11235666920970920409ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
