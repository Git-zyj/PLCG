#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4001049767386470260LL;
unsigned char var_1 = (unsigned char)169;
unsigned char var_8 = (unsigned char)50;
signed char var_11 = (signed char)-27;
signed char var_12 = (signed char)61;
unsigned char var_13 = (unsigned char)167;
int zero = 0;
signed char var_14 = (signed char)45;
unsigned char var_15 = (unsigned char)175;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-121;
signed char var_18 = (signed char)15;
signed char var_19 = (signed char)119;
long long int arr_1 [17] [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 6365615554916336236LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 7122027418753014161LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
