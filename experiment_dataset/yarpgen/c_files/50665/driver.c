#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2493865192865304296LL;
signed char var_2 = (signed char)102;
unsigned char var_3 = (unsigned char)50;
signed char var_4 = (signed char)69;
signed char var_5 = (signed char)-19;
long long int var_6 = 49707018271343026LL;
unsigned char var_9 = (unsigned char)144;
unsigned char var_10 = (unsigned char)80;
int var_14 = 619795300;
signed char var_15 = (signed char)127;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)52;
long long int var_18 = -567398119498382852LL;
long long int var_19 = 559262466982201906LL;
int var_20 = 154327009;
unsigned char var_21 = (unsigned char)143;
int var_22 = -1471279318;
int var_23 = -1803554115;
long long int arr_6 [21] ;
int arr_7 [21] [21] ;
long long int arr_12 [21] ;
long long int arr_3 [10] [10] ;
long long int arr_4 [10] ;
unsigned char arr_8 [21] [21] ;
unsigned char arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -6198250946219934907LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = -2074513006;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -713203253266316856LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -8883496923385254299LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2971879231031207208LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)175;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
