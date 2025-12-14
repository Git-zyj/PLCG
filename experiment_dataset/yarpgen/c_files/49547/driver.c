#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11558;
long long int var_5 = -2860083541517695214LL;
unsigned long long int var_7 = 7586589116409328568ULL;
unsigned long long int var_11 = 11415631352700003583ULL;
unsigned long long int var_12 = 5386389017800452377ULL;
unsigned int var_13 = 2689825784U;
int zero = 0;
long long int var_14 = 5811826361705731141LL;
unsigned long long int var_15 = 15094747838480998050ULL;
long long int var_16 = -7171553691280560013LL;
short var_17 = (short)21073;
long long int var_18 = 4455126560241333381LL;
unsigned long long int arr_3 [13] ;
unsigned long long int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 3224279458929277511ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 345515706190645332ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
