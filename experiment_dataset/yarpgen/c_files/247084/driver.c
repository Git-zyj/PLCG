#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23507;
int var_3 = 970319509;
unsigned short var_8 = (unsigned short)54929;
unsigned long long int var_9 = 1184766887129982905ULL;
int var_10 = 2008074024;
unsigned long long int var_11 = 16887540669682450562ULL;
unsigned long long int var_13 = 9443872196627292487ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)27578;
unsigned long long int var_20 = 12495995621749383232ULL;
unsigned short var_21 = (unsigned short)21590;
unsigned long long int var_22 = 14488346791580131309ULL;
int var_23 = 76444049;
unsigned long long int var_24 = 16571281358089302938ULL;
int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned short arr_4 [13] ;
unsigned long long int arr_3 [13] [13] ;
int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 39490716;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 16757893132445857067ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3659 : (unsigned short)38742;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 10035054529831412851ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1872739889;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
