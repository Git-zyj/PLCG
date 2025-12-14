#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)59;
unsigned short var_8 = (unsigned short)15699;
int zero = 0;
unsigned char var_10 = (unsigned char)198;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13999705018385375410ULL;
unsigned char var_14 = (unsigned char)111;
long long int var_15 = 6923387683914137665LL;
long long int var_16 = 3501860552248731494LL;
long long int arr_2 [23] [23] ;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 6287916522973863058LL : -8298730715976813582LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)128;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
