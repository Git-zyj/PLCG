#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -4675194498236801915LL;
int var_3 = -665549158;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-29562;
int var_7 = -1274017286;
short var_8 = (short)-4574;
long long int var_9 = 4457182215994323576LL;
unsigned int var_10 = 386124769U;
unsigned int var_13 = 227070984U;
int zero = 0;
signed char var_14 = (signed char)-18;
_Bool var_15 = (_Bool)1;
int var_16 = -1960154389;
signed char var_17 = (signed char)-114;
unsigned long long int var_18 = 5846133485512469863ULL;
signed char var_19 = (signed char)-105;
int arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1607738666;
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
