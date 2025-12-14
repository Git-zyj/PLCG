#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)14;
unsigned int var_5 = 3336518078U;
int var_6 = -1491646785;
unsigned long long int var_8 = 8374662962068449819ULL;
unsigned char var_9 = (unsigned char)20;
unsigned int var_10 = 2696423249U;
int zero = 0;
unsigned long long int var_12 = 10015470728915187721ULL;
signed char var_13 = (signed char)108;
unsigned long long int var_14 = 10531046548545643428ULL;
unsigned char var_15 = (unsigned char)241;
unsigned int var_16 = 3341549445U;
unsigned char var_17 = (unsigned char)208;
long long int var_18 = 9049096938288092920LL;
unsigned char arr_0 [20] ;
unsigned int arr_3 [20] [20] ;
int arr_5 [20] ;
unsigned long long int arr_6 [20] ;
int arr_7 [20] [20] ;
signed char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 605674704U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -1902981305;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 17766557884019574712ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -161792371;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)53;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
