#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
short var_1 = (short)14647;
long long int var_2 = 4432475896045152139LL;
unsigned int var_3 = 724836260U;
long long int var_4 = -6386309759065253071LL;
unsigned int var_5 = 1555344589U;
unsigned long long int var_6 = 7738575270011891359ULL;
long long int var_7 = -2994149857068550162LL;
unsigned long long int var_8 = 7734713264195743936ULL;
unsigned char var_9 = (unsigned char)95;
unsigned long long int var_10 = 9079432616743008282ULL;
int zero = 0;
int var_11 = -1267674764;
signed char var_12 = (signed char)-97;
unsigned int var_13 = 92159148U;
int var_14 = -2058668520;
long long int var_15 = 1388103985818891583LL;
unsigned short var_16 = (unsigned short)11720;
unsigned char var_17 = (unsigned char)171;
unsigned short var_18 = (unsigned short)9037;
long long int var_19 = -7050903787641857522LL;
unsigned char var_20 = (unsigned char)87;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
int var_23 = -1563855100;
unsigned char var_24 = (unsigned char)78;
unsigned long long int var_25 = 15689734052450079836ULL;
_Bool arr_22 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
