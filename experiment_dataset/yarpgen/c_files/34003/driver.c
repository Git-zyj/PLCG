#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5547375876147435355LL;
unsigned char var_1 = (unsigned char)101;
long long int var_3 = 3151269719085925522LL;
unsigned char var_4 = (unsigned char)23;
unsigned char var_7 = (unsigned char)80;
unsigned long long int var_8 = 7351905241793747275ULL;
unsigned char var_9 = (unsigned char)112;
unsigned char var_12 = (unsigned char)226;
unsigned long long int var_13 = 16672416239035948635ULL;
unsigned char var_14 = (unsigned char)146;
int zero = 0;
long long int var_15 = -8215264543350806288LL;
unsigned char var_16 = (unsigned char)244;
unsigned char var_17 = (unsigned char)46;
unsigned long long int var_18 = 3155319443886870472ULL;
unsigned long long int var_19 = 5154088464897556035ULL;
unsigned char var_20 = (unsigned char)148;
unsigned char var_21 = (unsigned char)243;
long long int var_22 = -5121632265917720191LL;
long long int arr_1 [25] ;
unsigned char arr_4 [25] [25] ;
long long int arr_5 [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] [25] ;
unsigned char arr_11 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 3641825295843914644LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6266459645705920884LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8599017230267184264ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)111;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
