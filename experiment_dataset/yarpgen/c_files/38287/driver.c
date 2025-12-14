#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2414;
short var_2 = (short)-17406;
long long int var_3 = 3977516270236887500LL;
long long int var_4 = -8736094391794777409LL;
short var_6 = (short)-23933;
short var_7 = (short)-27722;
short var_8 = (short)32561;
short var_9 = (short)26941;
int zero = 0;
unsigned short var_10 = (unsigned short)38942;
short var_11 = (short)27766;
unsigned short var_12 = (unsigned short)45766;
short var_13 = (short)-942;
long long int arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
long long int arr_2 [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2617490364730983260LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)16386;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3797545432639326899LL : 6756525287112782372LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 5196492868246599956LL : 213291883853522761LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
