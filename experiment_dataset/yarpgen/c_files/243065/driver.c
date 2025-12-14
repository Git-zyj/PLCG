#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
int var_4 = 81902138;
short var_5 = (short)29603;
int var_6 = -997523750;
long long int var_8 = -3841126909847228935LL;
int var_10 = -2139208488;
int zero = 0;
unsigned long long int var_11 = 6136496459638270931ULL;
short var_12 = (short)23898;
short var_13 = (short)-9465;
long long int var_14 = 56753670498250038LL;
_Bool var_15 = (_Bool)0;
long long int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1771146240838131420LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
