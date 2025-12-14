#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)226;
unsigned char var_2 = (unsigned char)15;
unsigned char var_4 = (unsigned char)170;
int var_5 = 1841314806;
unsigned char var_6 = (unsigned char)195;
int var_7 = 581949691;
unsigned long long int var_9 = 9680181881634209608ULL;
unsigned char var_10 = (unsigned char)90;
int var_11 = 43083484;
unsigned char var_13 = (unsigned char)28;
int var_14 = -268918392;
unsigned char var_15 = (unsigned char)90;
int var_16 = 1024701169;
unsigned char var_17 = (unsigned char)139;
int zero = 0;
unsigned char var_19 = (unsigned char)114;
unsigned char var_20 = (unsigned char)21;
unsigned long long int var_21 = 5523997466736130587ULL;
unsigned long long int var_22 = 8958242140293902106ULL;
unsigned char var_23 = (unsigned char)50;
int var_24 = -2109457785;
unsigned long long int var_25 = 13034746613930620080ULL;
unsigned char var_26 = (unsigned char)81;
unsigned char var_27 = (unsigned char)26;
int arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
unsigned long long int arr_3 [24] [24] ;
int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1811899024;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 5565161443979051052ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1574482830;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
