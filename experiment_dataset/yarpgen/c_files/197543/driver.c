#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6610058244347090181ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3273789753U;
unsigned long long int var_8 = 2535710480723539838ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 14267295126655210708ULL;
int var_13 = 2137926227;
int var_16 = 1200044329;
short var_17 = (short)-11281;
int zero = 0;
signed char var_18 = (signed char)-28;
unsigned long long int var_19 = 16908798601295352249ULL;
long long int var_20 = -3388126862128631999LL;
unsigned long long int var_21 = 1930428350403532939ULL;
unsigned short var_22 = (unsigned short)28588;
long long int arr_5 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 5347648251523964672LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
