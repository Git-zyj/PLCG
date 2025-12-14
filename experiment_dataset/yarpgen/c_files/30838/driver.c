#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15405703877817994674ULL;
unsigned short var_1 = (unsigned short)36492;
unsigned char var_2 = (unsigned char)212;
unsigned int var_4 = 352692400U;
long long int var_13 = -2384905291213028499LL;
unsigned char var_15 = (unsigned char)221;
int zero = 0;
unsigned long long int var_17 = 11036947904340347773ULL;
signed char var_18 = (signed char)64;
short var_19 = (short)26646;
int arr_0 [22] ;
unsigned int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -297439565;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 983568649U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
