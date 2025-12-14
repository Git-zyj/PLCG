#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3049775194372324975LL;
unsigned long long int var_3 = 10690311553418569271ULL;
short var_5 = (short)-3021;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)39551;
unsigned long long int var_9 = 12373080989049672475ULL;
unsigned int var_10 = 4246163308U;
int zero = 0;
unsigned char var_11 = (unsigned char)209;
long long int var_12 = -2302131865793233516LL;
long long int var_13 = 4557736457969797506LL;
unsigned short var_14 = (unsigned short)27125;
_Bool arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)64;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
