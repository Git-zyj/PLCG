#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 72778735;
unsigned int var_3 = 46712481U;
int var_7 = -1964674873;
_Bool var_9 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_17 = (signed char)-72;
int zero = 0;
unsigned short var_20 = (unsigned short)39815;
unsigned long long int var_21 = 9102861729181908791ULL;
short var_22 = (short)-8951;
unsigned char var_23 = (unsigned char)126;
unsigned long long int var_24 = 2320223384159583378ULL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)121;
unsigned long long int var_27 = 5568281969927895911ULL;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
signed char arr_0 [13] ;
unsigned int arr_10 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 164437821U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
