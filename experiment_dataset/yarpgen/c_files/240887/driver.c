#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1313693111;
unsigned long long int var_1 = 15615848915152507374ULL;
unsigned char var_5 = (unsigned char)255;
unsigned char var_6 = (unsigned char)215;
signed char var_12 = (signed char)-75;
unsigned char var_13 = (unsigned char)113;
long long int var_15 = -7132201895054821045LL;
unsigned long long int var_16 = 14325795940991709051ULL;
int zero = 0;
unsigned long long int var_17 = 4341808074143249834ULL;
short var_18 = (short)-13609;
unsigned long long int var_19 = 4465816805683122739ULL;
unsigned short arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42 : (unsigned short)12980;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
