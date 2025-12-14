#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57283;
int var_4 = -90092612;
long long int var_6 = 3170384171871266222LL;
short var_10 = (short)3655;
int zero = 0;
signed char var_14 = (signed char)106;
unsigned int var_15 = 1674752566U;
unsigned long long int var_16 = 7534223852713727407ULL;
signed char var_17 = (signed char)32;
long long int var_18 = -2509924260756515429LL;
signed char arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)86;
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
