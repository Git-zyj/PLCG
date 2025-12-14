#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 641676925;
short var_3 = (short)9273;
long long int var_7 = -4005716380089990766LL;
int var_11 = 76598460;
long long int var_12 = -9099799886510136305LL;
int zero = 0;
unsigned char var_13 = (unsigned char)98;
unsigned char var_14 = (unsigned char)134;
unsigned int var_15 = 784669658U;
unsigned long long int var_16 = 11837919829991416329ULL;
short var_17 = (short)-1533;
unsigned char arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 17602497478271415784ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
