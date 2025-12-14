#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
signed char var_3 = (signed char)43;
long long int var_5 = -8576003237517437976LL;
long long int var_7 = 1471428786801467140LL;
unsigned short var_11 = (unsigned short)13859;
int zero = 0;
long long int var_12 = -4195438693639779188LL;
unsigned int var_13 = 1133002004U;
unsigned short var_14 = (unsigned short)31171;
int var_15 = 1595653195;
signed char var_16 = (signed char)105;
unsigned long long int var_17 = 17884882052613692092ULL;
unsigned int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned char arr_4 [25] ;
unsigned char arr_5 [25] ;
long long int arr_3 [22] ;
signed char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 4103667460U : 4223117178U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2651125263157075958LL : -7135748320315456447LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)-17;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
