#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3032034560U;
unsigned long long int var_1 = 6653248304671397533ULL;
short var_4 = (short)-26254;
unsigned char var_5 = (unsigned char)76;
unsigned short var_6 = (unsigned short)30399;
unsigned long long int var_8 = 9438361442519036844ULL;
unsigned long long int var_10 = 1981562811719654731ULL;
unsigned long long int var_12 = 4470910948708880441ULL;
int zero = 0;
int var_14 = -1399786020;
signed char var_15 = (signed char)-57;
unsigned long long int var_16 = 11699041318924140203ULL;
long long int var_17 = 8311218146549379792LL;
unsigned int var_18 = 4007492989U;
unsigned long long int arr_0 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 15870701805858303412ULL;
}

void checksum() {
    hash(&seed, var_14);
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
