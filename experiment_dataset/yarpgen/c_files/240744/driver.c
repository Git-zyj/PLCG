#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7541505594105846876ULL;
int var_4 = 877271268;
int var_7 = 1308163149;
long long int var_8 = -6246218146246064770LL;
int var_12 = -598199385;
int var_13 = 450985625;
long long int var_15 = 6571748859970968606LL;
signed char var_16 = (signed char)-88;
int zero = 0;
signed char var_17 = (signed char)-38;
int var_18 = 471325564;
int var_19 = 1633326331;
unsigned int var_20 = 2169844762U;
long long int var_21 = -5278208329411277778LL;
int var_22 = 1116981244;
int var_23 = -575749983;
signed char arr_0 [25] [25] ;
signed char arr_1 [25] ;
int arr_2 [25] ;
long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1874819510;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 2639700903240211257LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
