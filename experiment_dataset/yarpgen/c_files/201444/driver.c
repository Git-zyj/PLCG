#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned long long int var_1 = 8812789116001597225ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-11;
unsigned long long int var_8 = 684987998073300108ULL;
long long int var_10 = -1482985031308437037LL;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)51009;
long long int var_16 = -1887094428664948207LL;
int zero = 0;
unsigned short var_17 = (unsigned short)22723;
unsigned long long int var_18 = 868778961196332787ULL;
_Bool var_19 = (_Bool)1;
long long int arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 4198410718142283472LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
