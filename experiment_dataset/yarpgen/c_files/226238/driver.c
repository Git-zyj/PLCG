#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32472;
signed char var_2 = (signed char)79;
unsigned char var_5 = (unsigned char)146;
unsigned char var_6 = (unsigned char)50;
signed char var_7 = (signed char)-19;
short var_10 = (short)18599;
signed char var_12 = (signed char)-118;
long long int var_14 = 6496503629165370089LL;
signed char var_16 = (signed char)94;
int zero = 0;
unsigned long long int var_17 = 1355870345703672751ULL;
unsigned char var_18 = (unsigned char)212;
unsigned short var_19 = (unsigned short)36853;
int var_20 = 373340161;
int var_21 = 2033110195;
unsigned short var_22 = (unsigned short)12789;
unsigned char var_23 = (unsigned char)178;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)110;
signed char var_26 = (signed char)60;
unsigned long long int arr_2 [12] [12] ;
long long int arr_11 [18] ;
long long int arr_4 [12] [12] ;
signed char arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 17129166306972430671ULL : 392660044792085097ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -8592763047010788927LL : 8256931147317333081LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 5761041739548040367LL : -5358140597053199082LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)51 : (signed char)-58;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
