#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12765104045070984024ULL;
unsigned long long int var_2 = 12021907865259169494ULL;
unsigned char var_3 = (unsigned char)91;
short var_5 = (short)-16310;
signed char var_7 = (signed char)87;
unsigned short var_8 = (unsigned short)58682;
unsigned char var_9 = (unsigned char)197;
signed char var_10 = (signed char)79;
long long int var_11 = -7242616941463327269LL;
int zero = 0;
unsigned short var_18 = (unsigned short)37688;
unsigned long long int var_19 = 15851228952515565396ULL;
unsigned short var_20 = (unsigned short)41296;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)46171;
signed char var_24 = (signed char)-118;
unsigned long long int var_25 = 17318246998477078947ULL;
unsigned long long int var_26 = 348917571141567891ULL;
unsigned char var_27 = (unsigned char)138;
long long int var_28 = 1670627390172106518LL;
unsigned long long int arr_0 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned long long int arr_6 [19] ;
long long int arr_10 [19] [19] [19] [19] [19] ;
signed char arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 16136279791888319342ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 4255072925626046989ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -8298656538009363533LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (signed char)-35;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
