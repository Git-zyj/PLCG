#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12478970567645194011ULL;
unsigned char var_1 = (unsigned char)216;
unsigned long long int var_3 = 15328539262560794903ULL;
unsigned char var_4 = (unsigned char)2;
int var_8 = 1488590226;
unsigned char var_11 = (unsigned char)253;
unsigned char var_14 = (unsigned char)16;
long long int var_15 = -4825931740323225753LL;
unsigned char var_16 = (unsigned char)224;
int zero = 0;
long long int var_17 = -5215856873363215551LL;
unsigned char var_18 = (unsigned char)167;
int var_19 = -1974831593;
short var_20 = (short)-24422;
short var_21 = (short)-917;
long long int arr_1 [17] [17] ;
unsigned long long int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -4385529455257893177LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 13143155610430801939ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4375067993890463288ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -7706103533870956460LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
