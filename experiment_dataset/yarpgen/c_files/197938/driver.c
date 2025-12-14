#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1589950874;
unsigned int var_4 = 3839799762U;
int var_5 = 204103901;
unsigned short var_6 = (unsigned short)61678;
unsigned char var_8 = (unsigned char)1;
signed char var_14 = (signed char)-28;
int var_18 = 251591837;
int zero = 0;
unsigned short var_20 = (unsigned short)8532;
unsigned char var_21 = (unsigned char)108;
signed char var_22 = (signed char)-79;
unsigned char var_23 = (unsigned char)89;
signed char var_24 = (signed char)79;
unsigned long long int var_25 = 10113567856908292939ULL;
unsigned short arr_1 [20] [20] ;
int arr_2 [20] ;
int arr_3 [20] [20] ;
unsigned short arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)14677;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -599454025;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 1907132859;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)23539 : (unsigned short)25557;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
