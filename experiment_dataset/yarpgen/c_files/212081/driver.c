#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15074239567416999221ULL;
unsigned long long int var_1 = 18328864392322807408ULL;
unsigned short var_2 = (unsigned short)63297;
unsigned short var_3 = (unsigned short)41581;
int var_4 = -95911809;
int var_8 = 514704096;
unsigned long long int var_9 = 17334248127918955835ULL;
unsigned short var_11 = (unsigned short)5338;
short var_12 = (short)-31618;
int zero = 0;
unsigned int var_13 = 3766355172U;
unsigned int var_14 = 125133735U;
long long int var_15 = 4215686369565580694LL;
unsigned long long int var_16 = 7480688420904748675ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-22490;
unsigned short arr_0 [17] [17] ;
unsigned short arr_1 [17] [17] ;
short arr_4 [17] ;
unsigned char arr_2 [17] ;
_Bool arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)59298 : (unsigned short)60072;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19968 : (unsigned short)18511;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-25020 : (short)25354;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)189 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
