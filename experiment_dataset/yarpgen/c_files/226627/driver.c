#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3844845015827318627ULL;
unsigned long long int var_1 = 17542907483243427270ULL;
unsigned int var_2 = 812881467U;
short var_3 = (short)-4594;
int var_4 = -1411011722;
unsigned int var_5 = 3098857504U;
unsigned short var_11 = (unsigned short)52039;
int zero = 0;
unsigned short var_13 = (unsigned short)28578;
short var_14 = (short)28372;
long long int var_15 = -2330507150298741591LL;
signed char var_16 = (signed char)-64;
long long int var_17 = -7727075762233900372LL;
_Bool arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
long long int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2106403298U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1173922046792047485ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6603649822117550477LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
