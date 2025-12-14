#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1053892096;
long long int var_2 = -6412418235620137582LL;
int var_3 = -1258882566;
unsigned int var_5 = 3587154959U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 16923392252286003486ULL;
long long int var_11 = -5494213656920346292LL;
long long int var_12 = 2257703991731802700LL;
int var_13 = -1137612376;
int var_14 = -1373662254;
signed char var_15 = (signed char)118;
int arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned int arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1448818680;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1174279139127399543ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 4170092836U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
