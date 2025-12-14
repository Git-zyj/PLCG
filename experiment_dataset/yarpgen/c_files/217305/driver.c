#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
signed char var_3 = (signed char)-11;
int var_4 = 2020679539;
long long int var_5 = 5315114371443606431LL;
int var_6 = 1630515634;
unsigned short var_8 = (unsigned short)55878;
long long int var_10 = 1401462067443677654LL;
int var_11 = 1852884222;
long long int var_13 = -2454313500143740760LL;
int zero = 0;
short var_15 = (short)3683;
short var_16 = (short)-11669;
unsigned char var_17 = (unsigned char)91;
int arr_4 [23] [23] ;
short arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 825202318 : -362418414;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)18645 : (short)31644;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
