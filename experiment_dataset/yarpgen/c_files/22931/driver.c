#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5176687104912764357ULL;
unsigned char var_4 = (unsigned char)63;
unsigned char var_8 = (unsigned char)155;
long long int var_10 = -4464197100435481025LL;
long long int var_12 = -4866329326300700489LL;
signed char var_13 = (signed char)-9;
short var_14 = (short)17318;
int zero = 0;
unsigned long long int var_15 = 17230920976449706082ULL;
signed char var_16 = (signed char)18;
unsigned char var_17 = (unsigned char)240;
unsigned int var_18 = 1269348974U;
long long int var_19 = 6685853714000212855LL;
unsigned long long int var_20 = 4720344785251256251ULL;
unsigned char var_21 = (unsigned char)228;
unsigned short var_22 = (unsigned short)59362;
unsigned short var_23 = (unsigned short)34772;
unsigned char var_24 = (unsigned char)128;
unsigned short arr_0 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned char arr_6 [13] ;
unsigned int arr_13 [13] [13] [13] [13] [13] ;
short arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)62473;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19560 : (unsigned short)9330;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 277587739U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)13423 : (short)5286;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
