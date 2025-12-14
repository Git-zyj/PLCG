#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4879181315610214502ULL;
unsigned short var_2 = (unsigned short)8372;
short var_3 = (short)2325;
unsigned long long int var_4 = 8906289775089241969ULL;
unsigned char var_6 = (unsigned char)170;
unsigned long long int var_7 = 13595244896615239549ULL;
short var_9 = (short)9389;
unsigned char var_12 = (unsigned char)76;
int zero = 0;
int var_15 = 581941575;
long long int var_16 = 101382614572570913LL;
unsigned short var_17 = (unsigned short)31240;
long long int var_18 = -7806250706141622740LL;
unsigned short var_19 = (unsigned short)21526;
unsigned long long int var_20 = 6243702632998471350ULL;
int var_21 = 1402797143;
short var_22 = (short)29051;
int arr_0 [13] [13] ;
_Bool arr_5 [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -1391088026;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)59;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
