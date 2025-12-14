#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13929824460848309364ULL;
unsigned long long int var_3 = 17472068172386523456ULL;
short var_6 = (short)27464;
signed char var_8 = (signed char)82;
unsigned short var_11 = (unsigned short)14167;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2465493412825781525ULL;
int zero = 0;
long long int var_15 = 8241362583618903843LL;
unsigned long long int var_16 = 4444565303797249465ULL;
unsigned char var_17 = (unsigned char)241;
long long int var_18 = -9067366708353802830LL;
short var_19 = (short)23464;
int var_20 = 992901126;
unsigned int arr_0 [22] ;
unsigned int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1065746158U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 374867749U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
