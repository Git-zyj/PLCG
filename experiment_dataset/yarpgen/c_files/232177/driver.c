#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)212;
signed char var_6 = (signed char)-34;
unsigned char var_11 = (unsigned char)236;
unsigned long long int var_12 = 6065406681024503567ULL;
unsigned int var_14 = 3679876387U;
unsigned long long int var_17 = 10892214784778814602ULL;
int zero = 0;
unsigned int var_18 = 362317139U;
long long int var_19 = 2515465332201380791LL;
unsigned int var_20 = 3777956777U;
unsigned long long int var_21 = 11387806131518316596ULL;
unsigned char var_22 = (unsigned char)236;
unsigned char var_23 = (unsigned char)24;
signed char var_24 = (signed char)-5;
unsigned long long int arr_2 [19] ;
unsigned long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13899528928515275132ULL : 17793060159541587716ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 12142203746751922728ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
