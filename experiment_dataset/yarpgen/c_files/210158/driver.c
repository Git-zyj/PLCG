#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
int var_2 = 1882334439;
long long int var_3 = 7524164507243512356LL;
int var_4 = 1957095460;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17865580509973040043ULL;
short var_9 = (short)-9198;
_Bool var_10 = (_Bool)1;
int var_11 = 1074933659;
int var_12 = -1476282051;
unsigned int var_14 = 2940526707U;
signed char var_15 = (signed char)110;
int zero = 0;
short var_17 = (short)27288;
int var_18 = -2012681279;
_Bool var_19 = (_Bool)1;
int var_20 = 1229762741;
unsigned int var_21 = 2674342768U;
long long int var_22 = 3448513776857306304LL;
short arr_0 [25] [25] ;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-4573;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -361335979;
}

void checksum() {
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
