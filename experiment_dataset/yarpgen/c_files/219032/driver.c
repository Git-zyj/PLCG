#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2970018562U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)110;
int var_5 = 623527666;
unsigned int var_6 = 445697023U;
unsigned short var_7 = (unsigned short)22823;
unsigned long long int var_8 = 13957049460393959696ULL;
int zero = 0;
unsigned int var_10 = 434915251U;
unsigned short var_11 = (unsigned short)13184;
unsigned long long int var_12 = 2274544956749636153ULL;
unsigned short var_13 = (unsigned short)55823;
short var_14 = (short)16148;
long long int var_15 = -3493966315974402040LL;
long long int arr_3 [23] ;
int arr_14 [23] [23] [23] ;
unsigned char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -8169285653785729632LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1155094079;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)153;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
