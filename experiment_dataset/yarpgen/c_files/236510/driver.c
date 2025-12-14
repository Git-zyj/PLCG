#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 705168271U;
unsigned short var_5 = (unsigned short)15618;
long long int var_6 = -1909491816484828497LL;
long long int var_7 = 5512521307827221036LL;
unsigned int var_11 = 1743810470U;
_Bool var_12 = (_Bool)1;
unsigned short var_15 = (unsigned short)24893;
unsigned short var_16 = (unsigned short)37634;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-11;
long long int arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 2458885109645725839LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
