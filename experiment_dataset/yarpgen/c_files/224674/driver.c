#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14725044412892176536ULL;
short var_1 = (short)-7898;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6238119825136941354ULL;
long long int var_5 = -1451617449178543902LL;
long long int var_6 = -8653638240356179855LL;
unsigned int var_7 = 366558054U;
unsigned short var_8 = (unsigned short)47117;
unsigned long long int var_9 = 11329777376565515035ULL;
int var_10 = -1358611434;
int zero = 0;
short var_11 = (short)17999;
unsigned long long int var_12 = 5434175479539522826ULL;
signed char var_13 = (signed char)-110;
unsigned int var_14 = 670495586U;
unsigned long long int var_15 = 5041626762612842223ULL;
signed char var_16 = (signed char)-66;
_Bool var_17 = (_Bool)0;
unsigned short arr_8 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)19077;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
