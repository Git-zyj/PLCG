#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13658840092809182951ULL;
int var_2 = 1722944747;
unsigned long long int var_4 = 13191622901262410527ULL;
unsigned long long int var_5 = 6468345200711526401ULL;
int var_7 = -514802369;
int var_8 = -176194151;
unsigned long long int var_9 = 7222939952141447624ULL;
unsigned long long int var_15 = 442956249631906859ULL;
unsigned long long int var_16 = 1248978980120763187ULL;
int zero = 0;
int var_18 = -148763320;
int var_19 = -450622024;
int var_20 = -844765036;
unsigned long long int var_21 = 15699671558115984774ULL;
int var_22 = -538469170;
unsigned long long int arr_0 [18] ;
int arr_2 [18] ;
int arr_6 [18] [18] ;
int arr_3 [18] [18] ;
unsigned long long int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2646533925755462059ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -766805694;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 960462459;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -246615842;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 17055807108060447222ULL : 11131089735760901644ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
