#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9406440325628072477ULL;
unsigned long long int var_2 = 1290124446829804421ULL;
unsigned long long int var_6 = 33928352699705028ULL;
unsigned long long int var_7 = 1099508357562857204ULL;
unsigned long long int var_8 = 17786094444491804360ULL;
int zero = 0;
unsigned long long int var_12 = 13307596487959105344ULL;
unsigned long long int var_13 = 17515179169128511275ULL;
unsigned long long int var_14 = 6650672356880051696ULL;
unsigned long long int var_15 = 8078950548540692421ULL;
unsigned long long int var_16 = 2429911918054785171ULL;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 7257519282158316995ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 13729023543297420633ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 9684892578372188492ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 8562343191450042525ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
