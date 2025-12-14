#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
int var_4 = -858670602;
unsigned char var_7 = (unsigned char)71;
signed char var_10 = (signed char)58;
int var_11 = 599328348;
short var_13 = (short)29120;
int var_14 = -1877360547;
int zero = 0;
short var_15 = (short)28457;
short var_16 = (short)-15484;
unsigned long long int var_17 = 4993753114214335069ULL;
unsigned short var_18 = (unsigned short)36067;
unsigned long long int var_19 = 2526412496330385757ULL;
unsigned char var_20 = (unsigned char)14;
signed char var_21 = (signed char)-83;
unsigned char var_22 = (unsigned char)225;
long long int var_23 = 5126770305612619528LL;
unsigned long long int var_24 = 946351713148521808ULL;
int arr_0 [24] ;
unsigned char arr_1 [24] ;
long long int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 718033893;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)66 : (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 8463883044827320305LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 14104579453845967437ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 17916580328856774600ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
