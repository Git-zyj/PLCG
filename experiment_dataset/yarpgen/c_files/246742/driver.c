#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16454801693222211026ULL;
unsigned char var_8 = (unsigned char)246;
signed char var_14 = (signed char)-76;
int zero = 0;
long long int var_20 = 5271060676618857896LL;
short var_21 = (short)30418;
signed char var_22 = (signed char)-82;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)38;
long long int var_25 = -3401681552498953706LL;
long long int var_26 = -783096699523472822LL;
long long int arr_0 [24] ;
unsigned char arr_1 [24] ;
signed char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -7066531539608487030LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-83;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
