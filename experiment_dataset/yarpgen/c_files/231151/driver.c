#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6564146761477483284ULL;
unsigned int var_5 = 287635835U;
int var_7 = 1636305550;
long long int var_8 = -6663881261506412539LL;
unsigned char var_11 = (unsigned char)210;
signed char var_12 = (signed char)75;
signed char var_14 = (signed char)-61;
long long int var_16 = -4352881809735506720LL;
unsigned long long int var_17 = 13346644425055570981ULL;
int zero = 0;
int var_20 = 429576289;
unsigned short var_21 = (unsigned short)51490;
int var_22 = -728720029;
int var_23 = -1325571548;
int var_24 = 1173327813;
unsigned long long int var_25 = 11489009192256647256ULL;
unsigned char arr_3 [14] ;
unsigned long long int arr_12 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 16265419050873373971ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
