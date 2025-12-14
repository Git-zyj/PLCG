#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3815;
short var_1 = (short)7365;
unsigned int var_2 = 1019439020U;
int var_3 = 1614950121;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6197941525083474420LL;
long long int var_7 = -5988303177247760781LL;
unsigned short var_8 = (unsigned short)1741;
signed char var_9 = (signed char)57;
unsigned int var_10 = 513841870U;
int zero = 0;
unsigned int var_11 = 1582077480U;
unsigned short var_12 = (unsigned short)35107;
signed char var_13 = (signed char)112;
unsigned char var_14 = (unsigned char)151;
int arr_0 [25] ;
signed char arr_2 [25] [25] [25] ;
long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1970869565;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3110337547193224622LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
