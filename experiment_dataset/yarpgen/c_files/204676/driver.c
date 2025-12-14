#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5097529665481130910LL;
unsigned int var_2 = 4246967588U;
unsigned long long int var_3 = 7915416164434800049ULL;
int var_6 = 996231835;
unsigned long long int var_10 = 6336579280327181178ULL;
signed char var_12 = (signed char)-40;
short var_15 = (short)4929;
int zero = 0;
short var_17 = (short)7681;
unsigned char var_18 = (unsigned char)203;
unsigned short var_19 = (unsigned short)49077;
short var_20 = (short)-6597;
unsigned short var_21 = (unsigned short)31780;
unsigned long long int arr_1 [24] ;
short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 8371151271014884807ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)13104;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
