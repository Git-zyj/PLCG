#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2354702171570893959LL;
unsigned long long int var_6 = 4499958075969006639ULL;
int var_7 = 1311139314;
unsigned int var_8 = 1098546573U;
int zero = 0;
short var_10 = (short)-8982;
unsigned short var_11 = (unsigned short)1437;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4020564404U;
signed char var_14 = (signed char)52;
signed char var_15 = (signed char)0;
signed char var_16 = (signed char)89;
short arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-12016;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
