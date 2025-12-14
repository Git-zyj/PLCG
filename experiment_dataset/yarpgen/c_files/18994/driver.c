#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned char var_1 = (unsigned char)224;
unsigned char var_2 = (unsigned char)159;
unsigned long long int var_3 = 1192661729191204805ULL;
unsigned long long int var_5 = 2452953973499158468ULL;
int var_6 = -1772864844;
int var_9 = 1131556360;
short var_10 = (short)-30123;
int var_11 = 1463555379;
unsigned long long int var_12 = 15711223776534533162ULL;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
long long int var_14 = -4267357633442600828LL;
int var_15 = -758451916;
unsigned char var_16 = (unsigned char)66;
unsigned char var_17 = (unsigned char)7;
int arr_4 [10] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -230719807;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 81753224377177004ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
