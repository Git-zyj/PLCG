#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -9104395038351414838LL;
unsigned long long int var_11 = 7752196764280917518ULL;
long long int var_13 = 4941012758765791446LL;
int zero = 0;
int var_15 = 1192491312;
short var_16 = (short)19108;
signed char var_17 = (signed char)85;
unsigned char arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)215 : (unsigned char)40;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
