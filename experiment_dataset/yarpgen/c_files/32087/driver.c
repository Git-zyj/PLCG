#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 954599030U;
signed char var_7 = (signed char)-83;
long long int var_10 = 1129031279963108560LL;
unsigned int var_12 = 1271867379U;
signed char var_13 = (signed char)32;
int var_14 = 2139699233;
long long int var_15 = -428268087680418495LL;
unsigned long long int var_18 = 16186885308199559746ULL;
signed char var_19 = (signed char)95;
int zero = 0;
unsigned int var_20 = 3586105699U;
short var_21 = (short)-27496;
int var_22 = -1643356755;
int var_23 = 2133250968;
signed char var_24 = (signed char)-83;
signed char var_25 = (signed char)116;
short arr_0 [17] ;
int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)-31579;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1421514241;
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
