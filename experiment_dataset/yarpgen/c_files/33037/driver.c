#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15404777986023111672ULL;
unsigned short var_1 = (unsigned short)57833;
int var_2 = 1350080073;
short var_3 = (short)-10816;
long long int var_4 = 9169051942060055228LL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)12493;
unsigned int var_9 = 3979553874U;
int var_10 = 1493968820;
unsigned short var_12 = (unsigned short)57674;
unsigned long long int var_14 = 5359737802738751824ULL;
int zero = 0;
int var_19 = -65845785;
unsigned char var_20 = (unsigned char)160;
unsigned short var_21 = (unsigned short)3273;
unsigned short var_22 = (unsigned short)30667;
signed char var_23 = (signed char)-80;
unsigned int var_24 = 2881984557U;
unsigned int var_25 = 2304586868U;
unsigned long long int var_26 = 3743252758613381990ULL;
unsigned long long int var_27 = 4936792062300372485ULL;
unsigned char var_28 = (unsigned char)236;
signed char arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
long long int arr_2 [21] ;
unsigned char arr_3 [21] [21] ;
unsigned int arr_4 [21] [21] [21] ;
int arr_5 [21] [21] ;
unsigned char arr_6 [21] [21] [21] [21] ;
short arr_8 [21] [21] [21] [21] ;
long long int arr_10 [16] ;
unsigned short arr_12 [16] ;
int arr_13 [16] ;
unsigned long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12466108023786532608ULL : 12484776182729295247ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 689058651211203781LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1371734700U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -1542566931 : 1815822760;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)6098 : (short)28368;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -5703587488759244055LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned short)39529;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 964822608;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1400172586886715432ULL : 3153901408509366405ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
