#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)187;
unsigned char var_5 = (unsigned char)165;
signed char var_6 = (signed char)-27;
unsigned int var_7 = 2389447487U;
unsigned char var_8 = (unsigned char)37;
unsigned char var_9 = (unsigned char)66;
unsigned char var_11 = (unsigned char)141;
signed char var_12 = (signed char)-41;
unsigned int var_13 = 133211542U;
long long int var_15 = -8593461385072182662LL;
unsigned char var_17 = (unsigned char)99;
unsigned char var_19 = (unsigned char)143;
int zero = 0;
long long int var_20 = 8046094635203243829LL;
signed char var_21 = (signed char)85;
unsigned char var_22 = (unsigned char)246;
unsigned char var_23 = (unsigned char)85;
unsigned char var_24 = (unsigned char)117;
unsigned int var_25 = 2738692026U;
long long int var_26 = 5946328527240801301LL;
signed char var_27 = (signed char)40;
unsigned int var_28 = 3781266174U;
unsigned char var_29 = (unsigned char)33;
unsigned char var_30 = (unsigned char)182;
unsigned int arr_2 [17] ;
signed char arr_3 [17] ;
signed char arr_5 [25] ;
long long int arr_6 [25] ;
signed char arr_4 [17] ;
long long int arr_7 [25] ;
unsigned int arr_12 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 2944891477U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 4017333585725642842LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 7759336712266771986LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 1454561964U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
