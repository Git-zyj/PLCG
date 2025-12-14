#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1527107628U;
unsigned long long int var_1 = 2844960266187275337ULL;
unsigned char var_2 = (unsigned char)149;
signed char var_3 = (signed char)103;
short var_4 = (short)-29811;
unsigned int var_5 = 4117691559U;
_Bool var_7 = (_Bool)0;
long long int var_9 = -3765754563346867890LL;
unsigned long long int var_10 = 8614691589585561259ULL;
short var_11 = (short)31782;
unsigned long long int var_12 = 7283544181542812972ULL;
int zero = 0;
short var_13 = (short)-2536;
unsigned char var_14 = (unsigned char)136;
unsigned long long int var_15 = 12430717339906531803ULL;
short var_16 = (short)-14296;
unsigned long long int var_17 = 9407341244972261583ULL;
signed char var_18 = (signed char)-8;
unsigned int var_19 = 3247323214U;
unsigned long long int arr_0 [25] [25] ;
signed char arr_7 [25] [25] [25] [25] ;
short arr_8 [25] [25] [25] [25] ;
unsigned char arr_9 [25] [25] [25] [25] [25] ;
unsigned char arr_10 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 14855099022630832236ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-30798;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned char)18;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
