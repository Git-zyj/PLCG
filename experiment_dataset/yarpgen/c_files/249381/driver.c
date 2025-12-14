#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9451864709887327759ULL;
unsigned short var_4 = (unsigned short)18472;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)70;
int zero = 0;
signed char var_11 = (signed char)-38;
unsigned long long int var_12 = 7098996249521474978ULL;
signed char var_13 = (signed char)76;
unsigned long long int var_14 = 5403537832235539505ULL;
long long int arr_0 [20] ;
unsigned int arr_2 [20] ;
signed char arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -7953750911974212541LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2728240190U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)49;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
