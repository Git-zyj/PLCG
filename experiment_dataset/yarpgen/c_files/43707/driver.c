#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)145;
short var_5 = (short)-18191;
unsigned char var_7 = (unsigned char)202;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)22161;
unsigned long long int var_13 = 5585214859431775539ULL;
unsigned long long int var_14 = 14120123017961979432ULL;
int zero = 0;
int var_16 = -1731937230;
long long int var_17 = 420870186938583256LL;
short var_18 = (short)-12988;
short var_19 = (short)-634;
unsigned char var_20 = (unsigned char)83;
unsigned long long int var_21 = 4684247995769576588ULL;
unsigned short var_22 = (unsigned short)40638;
long long int arr_0 [16] ;
long long int arr_10 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7720444863805839001LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -7773733247169036861LL : 524404573180464394LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
