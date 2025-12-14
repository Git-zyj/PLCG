#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 17552104632150590384ULL;
signed char var_10 = (signed char)26;
_Bool var_14 = (_Bool)1;
int var_15 = -1136717746;
int var_18 = -1118417114;
int zero = 0;
unsigned short var_19 = (unsigned short)9853;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)97;
unsigned char var_23 = (unsigned char)197;
unsigned int arr_0 [14] ;
signed char arr_1 [14] ;
signed char arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3536197078U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-96;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
