#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-43;
signed char var_5 = (signed char)-125;
unsigned long long int var_7 = 876307470837523809ULL;
signed char var_10 = (signed char)-117;
unsigned short var_11 = (unsigned short)64036;
unsigned int var_12 = 3381417466U;
unsigned long long int var_15 = 13093504640043701163ULL;
int zero = 0;
short var_16 = (short)-19019;
short var_17 = (short)14311;
short var_18 = (short)-1730;
unsigned long long int var_19 = 7165594456807814284ULL;
long long int arr_2 [12] [12] [12] ;
int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -6725694188443902630LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 508980527 : -1494448210;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
