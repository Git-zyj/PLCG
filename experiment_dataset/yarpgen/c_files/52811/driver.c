#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64601;
int var_1 = 1844628380;
unsigned long long int var_6 = 1018571777925342142ULL;
unsigned long long int var_12 = 257935222030075811ULL;
long long int var_16 = -8066052701571877796LL;
signed char var_17 = (signed char)-121;
unsigned long long int var_19 = 13098385761416919187ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)203;
short var_21 = (short)19225;
signed char var_22 = (signed char)-25;
unsigned int var_23 = 3093737070U;
unsigned long long int var_24 = 17387464078404094378ULL;
_Bool var_25 = (_Bool)0;
unsigned short arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60611 : (unsigned short)18853;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
