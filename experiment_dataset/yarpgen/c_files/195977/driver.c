#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)67;
long long int var_2 = 6626848351538350145LL;
unsigned long long int var_3 = 14729291984682388646ULL;
int var_4 = 1043796398;
unsigned short var_5 = (unsigned short)15135;
unsigned long long int var_6 = 4517099458250599196ULL;
unsigned int var_7 = 382511953U;
short var_10 = (short)-2484;
int var_11 = 844380312;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)52557;
int var_14 = -1848715973;
int var_15 = -1236501875;
int var_16 = 490803538;
int zero = 0;
int var_18 = -1209358685;
unsigned char var_19 = (unsigned char)162;
unsigned long long int var_20 = 11486728368212731170ULL;
long long int var_21 = 3341886665925045780LL;
unsigned short var_22 = (unsigned short)5934;
unsigned short var_23 = (unsigned short)44912;
_Bool arr_11 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
