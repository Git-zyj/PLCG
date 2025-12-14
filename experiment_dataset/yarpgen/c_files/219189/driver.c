#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-77;
signed char var_8 = (signed char)99;
int var_10 = -331131365;
unsigned int var_11 = 1307057271U;
unsigned char var_12 = (unsigned char)168;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)1;
unsigned long long int var_16 = 8948211984448420245ULL;
unsigned long long int var_17 = 3483716096013644452ULL;
unsigned short var_18 = (unsigned short)10806;
signed char arr_5 [13] [13] [13] ;
long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 58468992315775819LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
