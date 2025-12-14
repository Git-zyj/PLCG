#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 946992880U;
long long int var_1 = -8978144136345868754LL;
signed char var_2 = (signed char)-125;
_Bool var_3 = (_Bool)0;
unsigned long long int var_9 = 8897601785221635490ULL;
long long int var_10 = -7751163300951205347LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 89620720U;
unsigned short var_14 = (unsigned short)28581;
signed char var_15 = (signed char)-21;
signed char var_16 = (signed char)-56;
long long int var_17 = -4378783237161627877LL;
unsigned int var_18 = 934049656U;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [19] [19] ;
signed char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 12324810132154156946ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-103;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
