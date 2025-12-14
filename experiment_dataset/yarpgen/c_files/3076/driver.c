#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8101465256114185533LL;
long long int var_2 = 6070020993486508900LL;
unsigned char var_3 = (unsigned char)26;
int var_4 = -895052290;
int var_7 = -1153291980;
short var_9 = (short)3954;
unsigned long long int var_11 = 12788693196752311983ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)135;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2067133795U;
int var_22 = -655585193;
int var_23 = 1062401949;
int var_24 = -560605744;
long long int var_25 = -6721286687593281052LL;
unsigned int var_26 = 3739697238U;
signed char var_27 = (signed char)-17;
unsigned long long int var_28 = 7226284730158055962ULL;
_Bool var_29 = (_Bool)1;
short arr_2 [23] [23] ;
unsigned char arr_6 [23] [23] ;
unsigned int arr_9 [23] ;
unsigned short arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5133;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 3834904150U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16526 : (unsigned short)4302;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
