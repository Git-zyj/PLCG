#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-35;
long long int var_2 = -1439564174451205281LL;
signed char var_4 = (signed char)91;
signed char var_5 = (signed char)7;
short var_7 = (short)-25621;
unsigned int var_10 = 1241219350U;
long long int var_12 = 4743059965598876830LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)-13102;
long long int var_15 = 6522841669893623156LL;
_Bool var_16 = (_Bool)0;
int var_17 = -449481088;
long long int var_18 = 1927735722411839631LL;
unsigned long long int var_19 = 11435274775998706395ULL;
unsigned long long int var_20 = 16587846296628231520ULL;
long long int var_21 = 8450431156608451982LL;
int var_22 = 79100632;
unsigned char var_23 = (unsigned char)203;
unsigned char arr_1 [25] ;
_Bool arr_2 [25] [25] ;
unsigned short arr_7 [12] [12] [12] ;
short arr_10 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)10415;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-2854;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
