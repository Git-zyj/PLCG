#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1374815262U;
unsigned short var_2 = (unsigned short)24356;
unsigned long long int var_3 = 17335623350665849146ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)7;
unsigned long long int var_10 = 8550232143575278553ULL;
unsigned long long int var_14 = 7592957832819054892ULL;
int zero = 0;
int var_15 = -187271522;
unsigned long long int var_16 = 13289001864741428104ULL;
long long int var_17 = -5670055094474875919LL;
unsigned char var_18 = (unsigned char)13;
long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -6059490654632093418LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
