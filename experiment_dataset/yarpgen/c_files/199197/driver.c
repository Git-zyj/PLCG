#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
unsigned short var_2 = (unsigned short)16968;
signed char var_3 = (signed char)124;
unsigned long long int var_5 = 288431568790953977ULL;
short var_7 = (short)8988;
unsigned short var_8 = (unsigned short)10680;
unsigned char var_9 = (unsigned char)205;
int var_10 = -1484879494;
signed char var_11 = (signed char)-4;
long long int var_12 = 5570943864667990778LL;
int zero = 0;
long long int var_13 = 5967706380621588651LL;
unsigned short var_14 = (unsigned short)65339;
unsigned long long int var_15 = 14093288033625825159ULL;
unsigned short var_16 = (unsigned short)17693;
unsigned short var_17 = (unsigned short)56045;
unsigned short var_18 = (unsigned short)33941;
unsigned long long int var_19 = 16306852053338014946ULL;
unsigned short var_20 = (unsigned short)44008;
unsigned short var_21 = (unsigned short)35561;
unsigned short var_22 = (unsigned short)5745;
unsigned char var_23 = (unsigned char)228;
unsigned char var_24 = (unsigned char)196;
unsigned char var_25 = (unsigned char)253;
long long int var_26 = 3267951415078428887LL;
signed char arr_3 [13] [13] [13] ;
int arr_22 [25] ;
unsigned char arr_16 [13] [13] ;
signed char arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = 1329313733;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)-28 : (signed char)-101;
}

void checksum() {
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
