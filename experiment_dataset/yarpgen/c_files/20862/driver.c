#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 13218294;
signed char var_3 = (signed char)-108;
_Bool var_4 = (_Bool)1;
int var_7 = 1434515110;
short var_9 = (short)-11047;
unsigned char var_11 = (unsigned char)115;
unsigned short var_15 = (unsigned short)16181;
unsigned long long int var_16 = 9630578777501423515ULL;
int zero = 0;
signed char var_17 = (signed char)51;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-11234;
int var_20 = -1196997602;
unsigned int var_21 = 3624574200U;
short var_22 = (short)-14653;
long long int var_23 = 6537293755319345148LL;
long long int var_24 = 3748999997486673049LL;
short arr_0 [21] [21] ;
unsigned int arr_4 [21] ;
int arr_15 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-884;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2402775880U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1462198142;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
