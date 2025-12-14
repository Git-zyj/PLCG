#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3554664965U;
unsigned int var_2 = 2166020492U;
unsigned char var_3 = (unsigned char)8;
long long int var_5 = 1908712312905948184LL;
signed char var_6 = (signed char)-51;
unsigned int var_7 = 3187644883U;
unsigned int var_8 = 655586707U;
long long int var_9 = 6618891009983957420LL;
long long int var_10 = -5565586043812293719LL;
unsigned char var_11 = (unsigned char)233;
int zero = 0;
signed char var_12 = (signed char)-102;
unsigned char var_13 = (unsigned char)180;
unsigned char var_14 = (unsigned char)254;
long long int var_15 = -375369801087275012LL;
long long int var_16 = -1412998280355189278LL;
short var_17 = (short)17939;
long long int var_18 = -7307578367387814773LL;
unsigned char var_19 = (unsigned char)101;
short arr_0 [25] ;
long long int arr_1 [25] ;
short arr_2 [25] ;
long long int arr_3 [25] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-23098;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7513865324507579060LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)1400;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 699961722924568645LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -6076567356244704121LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
