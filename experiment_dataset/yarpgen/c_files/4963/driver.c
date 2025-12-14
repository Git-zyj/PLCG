#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23453;
short var_4 = (short)15802;
int var_6 = -277428600;
signed char var_8 = (signed char)46;
signed char var_9 = (signed char)-68;
long long int var_10 = 44386452288035496LL;
long long int var_13 = -6493221924679349886LL;
long long int var_17 = 6670280627661208658LL;
int zero = 0;
short var_18 = (short)30403;
unsigned char var_19 = (unsigned char)181;
unsigned char var_20 = (unsigned char)34;
unsigned short var_21 = (unsigned short)46622;
signed char var_22 = (signed char)17;
int var_23 = 2142308108;
_Bool var_24 = (_Bool)0;
long long int var_25 = -2218491265973811725LL;
int arr_1 [21] ;
unsigned char arr_3 [21] ;
long long int arr_8 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -790720956;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 572598077011568259LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
