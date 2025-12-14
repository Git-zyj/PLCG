#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 778813135;
long long int var_8 = -2723391741855169910LL;
unsigned long long int var_9 = 8302583141305991501ULL;
unsigned long long int var_11 = 13688246495051348074ULL;
long long int var_12 = 3850072877033313698LL;
int zero = 0;
long long int var_13 = 6325553331081462322LL;
long long int var_14 = 5831695760206427875LL;
int var_15 = -627250449;
unsigned int var_16 = 2332725701U;
unsigned char var_17 = (unsigned char)245;
signed char var_18 = (signed char)-19;
long long int var_19 = -4512800497712052718LL;
long long int var_20 = -6209968800037584669LL;
long long int var_21 = 2554469425939763515LL;
unsigned long long int arr_1 [17] ;
long long int arr_4 [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
unsigned char arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 12287353693922107864ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3900156001601185017LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)46785 : (unsigned short)15086;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)232 : (unsigned char)166;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
