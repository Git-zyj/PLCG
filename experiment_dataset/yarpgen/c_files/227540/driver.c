#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11025;
unsigned char var_1 = (unsigned char)35;
unsigned long long int var_2 = 16813529597803733523ULL;
int var_3 = 659124402;
long long int var_4 = 5600131599863573603LL;
unsigned long long int var_5 = 13979228962388192950ULL;
unsigned long long int var_6 = 4433411436873367560ULL;
unsigned char var_9 = (unsigned char)17;
unsigned short var_10 = (unsigned short)46855;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 310481036U;
int zero = 0;
signed char var_13 = (signed char)23;
unsigned short var_14 = (unsigned short)64435;
unsigned char var_15 = (unsigned char)247;
unsigned long long int var_16 = 13728746896833911671ULL;
long long int var_17 = -1781345821536872386LL;
unsigned short var_18 = (unsigned short)19914;
short var_19 = (short)-17131;
unsigned char var_20 = (unsigned char)168;
unsigned long long int var_21 = 6699234542424829879ULL;
long long int var_22 = -8417410878288811909LL;
unsigned char var_23 = (unsigned char)68;
unsigned short var_24 = (unsigned short)13190;
unsigned int arr_6 [21] ;
unsigned int arr_13 [21] ;
unsigned short arr_21 [17] [17] [17] ;
short arr_22 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1950708371U : 2853693150U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 686075684U : 3057641U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)17990 : (unsigned short)24466;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (short)-25690;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
