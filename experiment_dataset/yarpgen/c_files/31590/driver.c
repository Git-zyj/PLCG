#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9055992227069899166LL;
unsigned char var_2 = (unsigned char)29;
int var_3 = -1585410868;
unsigned long long int var_4 = 17993053417864651699ULL;
unsigned long long int var_8 = 2098092629307611964ULL;
unsigned short var_9 = (unsigned short)60771;
unsigned short var_11 = (unsigned short)41316;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)69;
int var_15 = -1507818184;
unsigned short var_16 = (unsigned short)32461;
unsigned short var_17 = (unsigned short)49209;
_Bool var_18 = (_Bool)0;
int arr_4 [20] [20] [20] ;
long long int arr_10 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 615340795 : -236801475;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4203476391912256902LL : 6038259117760729822LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
