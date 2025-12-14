#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3829;
unsigned int var_1 = 1759290827U;
short var_4 = (short)-9896;
int var_6 = 1157668184;
short var_8 = (short)952;
long long int var_10 = -4752133726941985134LL;
unsigned long long int var_11 = 15647407348647619657ULL;
int var_13 = -1233727112;
short var_17 = (short)19858;
unsigned long long int var_19 = 5763586983942728719ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)14436;
unsigned short var_21 = (unsigned short)27851;
unsigned short var_22 = (unsigned short)45841;
signed char var_23 = (signed char)41;
short var_24 = (short)20365;
unsigned int arr_4 [20] ;
unsigned short arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 1132727948U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)14586 : (unsigned short)47560;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
