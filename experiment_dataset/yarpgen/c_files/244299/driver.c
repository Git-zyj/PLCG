#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3676673898U;
unsigned char var_6 = (unsigned char)47;
int var_8 = 514179413;
int var_9 = 1327282545;
unsigned long long int var_11 = 14015019619535378003ULL;
unsigned long long int var_13 = 663660669519282280ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)78;
short var_15 = (short)-18920;
short var_16 = (short)24169;
signed char var_17 = (signed char)121;
unsigned short var_18 = (unsigned short)32015;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned char arr_2 [10] ;
short arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)25494;
}

void checksum() {
    hash(&seed, var_14);
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
