#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
long long int var_1 = 2455836925355605656LL;
signed char var_4 = (signed char)120;
signed char var_5 = (signed char)123;
unsigned char var_6 = (unsigned char)95;
unsigned long long int var_7 = 10568548384430842010ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_14 = (short)-28439;
unsigned char var_15 = (unsigned char)44;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 13164979841603030423ULL;
unsigned long long int var_18 = 8732674844924199273ULL;
unsigned int var_19 = 1063862064U;
signed char var_20 = (signed char)-38;
unsigned int var_21 = 4263829825U;
_Bool var_22 = (_Bool)0;
int var_23 = -1939052476;
_Bool arr_3 [12] [12] ;
unsigned long long int arr_5 [12] [12] [12] ;
long long int arr_6 [12] [12] [12] ;
unsigned int arr_7 [12] ;
long long int arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2381716458943554998ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8320735538746072280LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 1562381669U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 5158075589849053270LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
