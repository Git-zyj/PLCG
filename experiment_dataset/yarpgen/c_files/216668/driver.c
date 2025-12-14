#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
long long int var_1 = 381514403080629593LL;
int var_2 = -1504792525;
unsigned long long int var_3 = 1129548057230840112ULL;
long long int var_4 = -8244906216439748995LL;
long long int var_5 = -5329462126622921571LL;
unsigned int var_6 = 4105888577U;
unsigned int var_7 = 862445217U;
unsigned short var_8 = (unsigned short)3356;
unsigned short var_9 = (unsigned short)8685;
signed char var_10 = (signed char)61;
short var_11 = (short)14036;
signed char var_12 = (signed char)84;
int zero = 0;
short var_13 = (short)-21869;
long long int var_14 = -8796329084165883194LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = 9193445491162031462LL;
unsigned char var_17 = (unsigned char)210;
int var_18 = 1309607985;
unsigned char var_19 = (unsigned char)249;
unsigned short var_20 = (unsigned short)2617;
signed char var_21 = (signed char)-88;
signed char var_22 = (signed char)-32;
short var_23 = (short)19248;
unsigned char var_24 = (unsigned char)78;
short var_25 = (short)19807;
signed char var_26 = (signed char)-10;
long long int var_27 = -3484376355402789620LL;
signed char var_28 = (signed char)-85;
unsigned short arr_5 [10] [10] ;
short arr_18 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)41497;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)3345 : (short)14034;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
