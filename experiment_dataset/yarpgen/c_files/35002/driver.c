#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-5583;
long long int var_5 = -5168550023143427122LL;
signed char var_8 = (signed char)-106;
signed char var_12 = (signed char)-59;
unsigned int var_14 = 3235985328U;
unsigned long long int var_15 = 10283001947285087533ULL;
signed char var_16 = (signed char)109;
int zero = 0;
unsigned char var_19 = (unsigned char)69;
unsigned long long int var_20 = 3193248360739799686ULL;
unsigned int var_21 = 4006241217U;
unsigned long long int var_22 = 15243622916832653951ULL;
unsigned short var_23 = (unsigned short)40754;
unsigned char var_24 = (unsigned char)81;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 543931958U;
}

void checksum() {
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
