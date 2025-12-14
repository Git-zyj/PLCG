#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3432308560109398437LL;
long long int var_1 = 2498105213772156893LL;
int var_3 = 1302745083;
long long int var_4 = 1968525402288764349LL;
unsigned short var_7 = (unsigned short)13541;
long long int var_9 = 2186638500010688822LL;
int zero = 0;
unsigned long long int var_12 = 4334870315923129114ULL;
unsigned long long int var_13 = 18402935172422610917ULL;
unsigned long long int var_14 = 15425864839103200545ULL;
signed char var_15 = (signed char)-41;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5058704750626530553ULL;
unsigned long long int var_18 = 16070917444367434112ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)4186;
unsigned short var_21 = (unsigned short)31328;
signed char var_22 = (signed char)-83;
signed char arr_0 [23] [23] ;
short arr_1 [23] ;
short arr_7 [16] ;
int arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-22512;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)16374;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -1453437207;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
