#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9061017436578278307LL;
short var_2 = (short)-7269;
int var_3 = 1932119091;
long long int var_4 = 2621136877892670605LL;
long long int var_6 = 1389953140725600944LL;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1163227043;
unsigned long long int var_13 = 4238033468722122692ULL;
unsigned short var_14 = (unsigned short)37102;
unsigned char var_15 = (unsigned char)234;
unsigned int var_16 = 4020125399U;
unsigned short arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)17987 : (unsigned short)26375;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
