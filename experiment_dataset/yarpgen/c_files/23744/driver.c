#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
signed char var_1 = (signed char)-74;
short var_2 = (short)-11668;
unsigned char var_3 = (unsigned char)15;
long long int var_4 = -946259497503691227LL;
int var_5 = -1251947026;
unsigned int var_6 = 2352230306U;
signed char var_7 = (signed char)45;
signed char var_8 = (signed char)43;
unsigned int var_9 = 2898616934U;
unsigned char var_10 = (unsigned char)185;
signed char var_11 = (signed char)115;
unsigned char var_12 = (unsigned char)111;
long long int var_13 = 3596487996375242293LL;
long long int var_14 = -2205377372390171122LL;
int var_15 = 1559144166;
long long int var_16 = 515535017593732086LL;
short var_17 = (short)10173;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 16621570917064839929ULL;
signed char var_20 = (signed char)55;
unsigned int var_21 = 1135969608U;
short var_22 = (short)17178;
unsigned long long int var_23 = 10589696298575912452ULL;
unsigned char var_24 = (unsigned char)187;
unsigned long long int var_25 = 10705415556412081859ULL;
long long int var_26 = -8709564929214158770LL;
int var_27 = 593305210;
long long int var_28 = -2605708862691299953LL;
signed char arr_16 [11] ;
short arr_17 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)-16074;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
