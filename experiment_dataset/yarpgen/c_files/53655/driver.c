#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4193262814457690356LL;
signed char var_2 = (signed char)88;
signed char var_4 = (signed char)-23;
unsigned long long int var_5 = 15489463238784930084ULL;
unsigned int var_6 = 434560402U;
unsigned int var_8 = 3559410848U;
unsigned int var_9 = 3042075556U;
unsigned long long int var_10 = 3955887413054668925ULL;
long long int var_11 = -6007587623487305544LL;
signed char var_12 = (signed char)26;
unsigned short var_13 = (unsigned short)46919;
int zero = 0;
unsigned long long int var_15 = 11745286875112054914ULL;
int var_16 = -1893013906;
signed char var_17 = (signed char)111;
unsigned int var_18 = 1138092574U;
unsigned short var_19 = (unsigned short)47416;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1213468689U;
signed char var_22 = (signed char)-95;
unsigned int var_23 = 4131347234U;
long long int var_24 = 2136966782677064394LL;
short var_25 = (short)8609;
signed char var_26 = (signed char)-116;
signed char var_27 = (signed char)-100;
signed char var_28 = (signed char)-37;
unsigned short var_29 = (unsigned short)14188;
signed char var_30 = (signed char)-80;
unsigned long long int var_31 = 13644499239337946349ULL;
unsigned char var_32 = (unsigned char)111;
long long int arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
signed char arr_2 [14] ;
_Bool arr_3 [14] [14] ;
signed char arr_4 [14] ;
int arr_5 [14] [14] ;
long long int arr_6 [14] ;
signed char arr_7 [14] [14] ;
unsigned short arr_8 [14] [14] [14] [14] ;
unsigned long long int arr_9 [14] ;
long long int arr_10 [14] [14] ;
short arr_12 [14] [14] ;
unsigned short arr_14 [14] ;
short arr_15 [14] [14] [14] [14] ;
unsigned int arr_18 [14] [14] [14] [14] [14] [14] ;
long long int arr_19 [14] [14] [14] [14] [14] [14] ;
int arr_20 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 7071993092862275673LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 6902564713774860141ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 1056887803;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -495305000007223617LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)54918;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 6641291402803807110ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 49013817271343787LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = (short)30803;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned short)10921;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)18828;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4231982472U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2834082852276807832LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -1609007909;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
