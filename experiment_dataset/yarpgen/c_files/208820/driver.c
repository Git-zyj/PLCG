#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)116;
unsigned long long int var_3 = 3706983890345783120ULL;
unsigned long long int var_4 = 17730950089825010895ULL;
unsigned char var_6 = (unsigned char)119;
short var_10 = (short)17396;
unsigned long long int var_11 = 2236291897569429720ULL;
signed char var_12 = (signed char)-52;
signed char var_13 = (signed char)20;
int var_14 = -762386836;
signed char var_16 = (signed char)-21;
unsigned short var_17 = (unsigned short)47383;
int zero = 0;
short var_20 = (short)-13278;
unsigned long long int var_21 = 8565566594094964460ULL;
short var_22 = (short)26925;
short var_23 = (short)-18226;
signed char var_24 = (signed char)112;
unsigned long long int var_25 = 2562036341075456226ULL;
unsigned char var_26 = (unsigned char)205;
long long int var_27 = -7576450507155767430LL;
unsigned short var_28 = (unsigned short)59893;
unsigned short var_29 = (unsigned short)7538;
short var_30 = (short)-1936;
unsigned int arr_1 [20] ;
unsigned int arr_2 [20] [20] [20] ;
unsigned char arr_6 [20] [20] [20] [20] ;
long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4212941168U : 3497315480U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 380124807U : 3950653735U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)78 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -7354035765826391900LL : -4899554004262137083LL;
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
