#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1993741121;
int var_4 = -153871635;
unsigned int var_5 = 324131408U;
_Bool var_9 = (_Bool)0;
int var_10 = -828357207;
unsigned long long int var_12 = 17216308028463305215ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_16 = 7438257918315748841LL;
long long int var_17 = -7808833443954406609LL;
int zero = 0;
signed char var_18 = (signed char)-94;
int var_19 = 993480447;
unsigned char var_20 = (unsigned char)137;
int var_21 = 1842938590;
unsigned int var_22 = 1810404008U;
int arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 2071026573 : -712307885;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
