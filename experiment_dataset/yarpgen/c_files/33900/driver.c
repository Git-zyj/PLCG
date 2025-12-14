#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21549;
int var_2 = 796463042;
unsigned long long int var_3 = 3902188317306431964ULL;
long long int var_9 = -7733512629482671760LL;
int var_10 = 1671246606;
unsigned long long int var_11 = 18269414967804982833ULL;
short var_12 = (short)-87;
short var_13 = (short)-21485;
unsigned short var_15 = (unsigned short)35237;
short var_16 = (short)-9358;
int zero = 0;
unsigned short var_20 = (unsigned short)35114;
unsigned short var_21 = (unsigned short)5082;
unsigned long long int var_22 = 5646397701643307096ULL;
short var_23 = (short)-16107;
unsigned char var_24 = (unsigned char)167;
unsigned short var_25 = (unsigned short)25483;
_Bool var_26 = (_Bool)1;
short var_27 = (short)-1163;
short var_28 = (short)-19960;
long long int var_29 = 3249036989562467673LL;
_Bool var_30 = (_Bool)1;
int arr_6 [10] [10] [10] [10] ;
short arr_9 [10] [10] [10] [10] ;
short arr_12 [10] ;
short arr_13 [10] ;
long long int arr_18 [10] ;
unsigned long long int arr_19 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1051322321 : 1080520541;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)-12897;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (short)-29372;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (short)19956;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = -6222932838846159351LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 13838762972605299616ULL : 14695077987995848778ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
