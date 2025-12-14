#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
int var_10 = -90045499;
unsigned short var_12 = (unsigned short)14131;
int zero = 0;
long long int var_14 = 1745874590711334641LL;
unsigned int var_15 = 1883787702U;
unsigned int var_16 = 1951647984U;
int var_17 = -1600626014;
short var_18 = (short)-8879;
long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -4836058857809551132LL;
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
