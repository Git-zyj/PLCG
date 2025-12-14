#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned long long int var_3 = 5866686551654776110ULL;
unsigned long long int var_5 = 6756418739785405961ULL;
unsigned long long int var_8 = 5088834844527188366ULL;
unsigned long long int var_9 = 5190196959823201339ULL;
signed char var_10 = (signed char)35;
signed char var_11 = (signed char)113;
signed char var_16 = (signed char)-34;
int zero = 0;
unsigned long long int var_18 = 17012606740248540602ULL;
signed char var_19 = (signed char)-17;
unsigned short var_20 = (unsigned short)41547;
int var_21 = -656568114;
signed char var_22 = (signed char)-123;
signed char var_23 = (signed char)81;
unsigned long long int var_24 = 2168247704651731344ULL;
unsigned char var_25 = (unsigned char)151;
unsigned long long int var_26 = 5259040559656906979ULL;
short var_27 = (short)30306;
signed char var_28 = (signed char)-4;
long long int var_29 = 4417514069990742244LL;
signed char arr_0 [17] ;
signed char arr_1 [17] [17] ;
unsigned int arr_3 [17] [17] ;
unsigned long long int arr_5 [17] ;
unsigned short arr_2 [17] [17] ;
signed char arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 2397424709U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 12112609336433888000ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)48729;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (signed char)-16;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
