#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1879013939;
signed char var_4 = (signed char)94;
unsigned long long int var_5 = 8021996644101945352ULL;
unsigned long long int var_6 = 2303579907942340516ULL;
unsigned int var_7 = 1196389455U;
unsigned long long int var_9 = 2703281978231699551ULL;
int zero = 0;
unsigned long long int var_11 = 17327675760999307235ULL;
unsigned long long int var_12 = 6960412784688099189ULL;
long long int var_13 = -867841854956698265LL;
unsigned long long int var_14 = 4074647495829295029ULL;
signed char var_15 = (signed char)-60;
unsigned char var_16 = (unsigned char)159;
signed char var_17 = (signed char)-88;
unsigned int var_18 = 678947327U;
unsigned char arr_0 [15] [15] ;
long long int arr_1 [15] [15] ;
long long int arr_2 [15] ;
int arr_3 [15] [15] ;
unsigned long long int arr_6 [15] [15] ;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 7635683107365384488LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -9086129182323861368LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1941950691 : -1255260892;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 12696049982274519587ULL : 4146954826312053479ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)135 : (unsigned char)171;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
