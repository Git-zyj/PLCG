#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14102541137984093385ULL;
unsigned long long int var_1 = 13954494367671082090ULL;
int var_4 = 1073442957;
unsigned long long int var_6 = 9415434479838556458ULL;
unsigned int var_7 = 14389143U;
unsigned long long int var_8 = 10589541927300236834ULL;
signed char var_10 = (signed char)-105;
unsigned long long int var_11 = 6588005658841818162ULL;
unsigned char var_14 = (unsigned char)194;
signed char var_15 = (signed char)-98;
int zero = 0;
signed char var_16 = (signed char)-48;
unsigned int var_17 = 1136525993U;
unsigned long long int var_18 = 12090933576222661080ULL;
unsigned int var_19 = 3592245869U;
unsigned int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned char arr_3 [25] ;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 957601570U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 12821010326885953230ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
