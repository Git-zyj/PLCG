#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10808076039508056315ULL;
long long int var_2 = -3166787215162340940LL;
short var_4 = (short)-2659;
signed char var_5 = (signed char)-118;
unsigned long long int var_6 = 16949224177727175082ULL;
signed char var_7 = (signed char)70;
unsigned char var_9 = (unsigned char)179;
unsigned int var_11 = 1257890270U;
short var_12 = (short)-1773;
unsigned int var_14 = 3581581863U;
unsigned long long int var_18 = 17582259210788676456ULL;
int zero = 0;
short var_20 = (short)-11482;
long long int var_21 = -2356884695468398172LL;
unsigned int var_22 = 3504538306U;
unsigned int var_23 = 1286084335U;
unsigned char arr_0 [16] ;
signed char arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)126;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
