#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 403687876;
unsigned short var_3 = (unsigned short)3054;
unsigned char var_5 = (unsigned char)127;
unsigned char var_6 = (unsigned char)82;
long long int var_7 = -3983115331147125866LL;
unsigned long long int var_8 = 16812217325785026896ULL;
int var_9 = 207924383;
unsigned int var_11 = 1935086064U;
unsigned int var_13 = 2454424966U;
int zero = 0;
int var_15 = 2066355677;
unsigned char var_16 = (unsigned char)203;
unsigned char var_17 = (unsigned char)108;
unsigned short var_18 = (unsigned short)4530;
int var_19 = -278825262;
int var_20 = 1285259114;
unsigned long long int var_21 = 15903985140376652914ULL;
unsigned int var_22 = 4268852963U;
unsigned short var_23 = (unsigned short)45456;
unsigned int var_24 = 3325314431U;
unsigned long long int var_25 = 8146162662963630483ULL;
int arr_2 [16] [16] ;
unsigned int arr_3 [16] [16] ;
int arr_4 [16] ;
unsigned short arr_6 [22] [22] ;
long long int arr_8 [22] ;
long long int arr_9 [24] [24] ;
_Bool arr_10 [24] [24] ;
signed char arr_11 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 803928097;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 3838310387U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1850549431;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)28918;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 4881309836417028757LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 7760594263056705508LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-88;
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
