#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1029586024U;
signed char var_2 = (signed char)109;
signed char var_5 = (signed char)5;
int var_9 = -801674602;
unsigned long long int var_10 = 17748038285847605299ULL;
unsigned long long int var_12 = 3034224682925846438ULL;
int var_13 = -2020970376;
signed char var_16 = (signed char)75;
int var_17 = -755214412;
unsigned long long int var_18 = 16451765815270772681ULL;
signed char var_19 = (signed char)59;
int zero = 0;
unsigned short var_20 = (unsigned short)23164;
unsigned char var_21 = (unsigned char)8;
signed char var_22 = (signed char)-96;
unsigned short var_23 = (unsigned short)63964;
int var_24 = -2091346258;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)44066;
int var_27 = -1232657310;
signed char var_28 = (signed char)-121;
int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 634762119;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
