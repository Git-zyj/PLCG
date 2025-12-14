#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8294289545733261817LL;
unsigned short var_4 = (unsigned short)5550;
unsigned int var_5 = 4270292970U;
int var_7 = -1689571231;
long long int var_8 = 4716994809471179938LL;
unsigned long long int var_9 = 5878895977812652357ULL;
unsigned char var_10 = (unsigned char)182;
unsigned short var_13 = (unsigned short)15308;
int zero = 0;
unsigned short var_14 = (unsigned short)3876;
unsigned int var_15 = 3368714351U;
unsigned int var_16 = 3988717733U;
unsigned int var_17 = 2024700124U;
unsigned char var_18 = (unsigned char)117;
unsigned char var_19 = (unsigned char)222;
unsigned long long int arr_1 [13] ;
unsigned int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 11979325988439807984ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3491095380U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
