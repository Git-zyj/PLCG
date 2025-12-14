#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5479;
_Bool var_1 = (_Bool)0;
int var_3 = 541434353;
unsigned int var_7 = 835013554U;
int var_9 = 1127301367;
int zero = 0;
int var_10 = 1770083655;
unsigned int var_11 = 4123021626U;
unsigned int var_12 = 2880172399U;
unsigned short var_13 = (unsigned short)13483;
signed char var_14 = (signed char)81;
unsigned int var_15 = 3068838174U;
unsigned long long int var_16 = 7924901337018443276ULL;
int arr_1 [21] ;
unsigned char arr_2 [21] ;
int arr_7 [21] [21] [21] [21] ;
int arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -1270499277;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 838089679;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -789806612 : 1745414952;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
