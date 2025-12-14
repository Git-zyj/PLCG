#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3324275811U;
signed char var_4 = (signed char)13;
short var_5 = (short)16793;
unsigned long long int var_6 = 10699935103837772780ULL;
short var_8 = (short)24936;
unsigned long long int var_9 = 15343084177766859710ULL;
signed char var_10 = (signed char)52;
unsigned long long int var_12 = 12814698636115310448ULL;
signed char var_13 = (signed char)-127;
int zero = 0;
int var_14 = 2079559626;
int var_15 = 420528096;
unsigned long long int var_16 = 8719441598251544326ULL;
long long int var_17 = -8262821408962676419LL;
int var_18 = -947748607;
unsigned long long int var_19 = 18320560730453039135ULL;
long long int arr_0 [17] [17] ;
_Bool arr_1 [17] ;
unsigned int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 203934168673497073LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3380529731U;
}

void checksum() {
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
