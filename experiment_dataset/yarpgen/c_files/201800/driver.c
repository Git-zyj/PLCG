#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
long long int var_2 = 7959037611331602070LL;
unsigned short var_3 = (unsigned short)56874;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)36082;
short var_10 = (short)-3003;
unsigned short var_12 = (unsigned short)14121;
long long int var_13 = -3724996361769143096LL;
int zero = 0;
long long int var_14 = 4201746848496041687LL;
unsigned long long int var_15 = 3207808888369075401ULL;
unsigned long long int var_16 = 11867009315335604166ULL;
unsigned int var_17 = 3056133092U;
long long int var_18 = 4565720096880207568LL;
unsigned long long int var_19 = 6340542470815850407ULL;
long long int var_20 = -1685512448581409011LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned long long int arr_7 [22] [22] [22] [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3976305321201395525ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -3007207016888645666LL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
