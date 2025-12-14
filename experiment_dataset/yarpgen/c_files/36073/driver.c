#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3206592247353213762LL;
unsigned long long int var_2 = 1543233157574615485ULL;
signed char var_4 = (signed char)-122;
unsigned long long int var_6 = 13790343060352285470ULL;
long long int var_7 = 5719997542700927021LL;
short var_9 = (short)18054;
signed char var_13 = (signed char)-15;
_Bool var_14 = (_Bool)1;
short var_17 = (short)-6945;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-40;
unsigned long long int var_20 = 8234998686297457795ULL;
unsigned char var_21 = (unsigned char)42;
unsigned long long int var_22 = 6067161879387163347ULL;
_Bool var_23 = (_Bool)1;
short var_24 = (short)23382;
_Bool var_25 = (_Bool)1;
long long int arr_0 [25] ;
unsigned char arr_1 [25] ;
long long int arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6348573094773616733LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -4305483663580244879LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
