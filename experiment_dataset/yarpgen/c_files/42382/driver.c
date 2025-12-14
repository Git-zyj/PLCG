#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)158;
unsigned char var_3 = (unsigned char)248;
signed char var_4 = (signed char)26;
unsigned int var_8 = 3319229025U;
signed char var_9 = (signed char)-66;
unsigned long long int var_13 = 13673471404004642075ULL;
unsigned long long int var_14 = 11021450281363527155ULL;
int zero = 0;
unsigned int var_20 = 1810351312U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 13119572355158158315ULL;
signed char var_23 = (signed char)47;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 16224045039366677815ULL;
unsigned long long int arr_0 [25] [25] ;
signed char arr_1 [25] ;
_Bool arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 12957983316058997219ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
