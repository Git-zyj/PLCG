#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3580003859U;
unsigned short var_4 = (unsigned short)790;
signed char var_5 = (signed char)75;
int zero = 0;
int var_12 = -329478621;
long long int var_13 = -2860859157776032920LL;
signed char var_14 = (signed char)40;
unsigned char var_15 = (unsigned char)121;
unsigned long long int var_16 = 17969962751177827745ULL;
unsigned long long int arr_0 [10] ;
long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1472345689626923531ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 692469269295876022LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
