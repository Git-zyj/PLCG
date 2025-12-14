#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1745671301529339273LL;
unsigned long long int var_3 = 922386114257403923ULL;
unsigned long long int var_11 = 6933994373577490877ULL;
unsigned short var_16 = (unsigned short)3050;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -4443256687358214816LL;
signed char var_21 = (signed char)50;
signed char var_22 = (signed char)47;
unsigned short var_23 = (unsigned short)11640;
unsigned char var_24 = (unsigned char)61;
long long int arr_2 [17] [17] [17] ;
int arr_4 [25] [25] ;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1515621962095611872LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -265248279;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 410538939U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
