#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3764411603224921726LL;
unsigned char var_4 = (unsigned char)225;
unsigned short var_5 = (unsigned short)38225;
unsigned int var_6 = 1948603906U;
unsigned long long int var_11 = 18026156080586789357ULL;
unsigned long long int var_13 = 2246483886827523032ULL;
int zero = 0;
long long int var_20 = -3709397477438600973LL;
unsigned short var_21 = (unsigned short)45283;
unsigned int var_22 = 403001288U;
_Bool var_23 = (_Bool)1;
unsigned int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 3587343225U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3542618668U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
