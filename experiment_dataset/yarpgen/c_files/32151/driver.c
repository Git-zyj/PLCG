#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46901;
long long int var_3 = -5051402161140695LL;
signed char var_5 = (signed char)91;
unsigned long long int var_6 = 5607661361652588917ULL;
short var_7 = (short)-28588;
signed char var_8 = (signed char)29;
signed char var_9 = (signed char)92;
long long int var_11 = 1878717460294765099LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_18 = (short)5878;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-2130;
unsigned char var_21 = (unsigned char)178;
long long int arr_14 [25] [25] [25] [25] [25] ;
signed char arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -7823537430783502542LL : 7787941809470518881LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-35 : (signed char)118;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
