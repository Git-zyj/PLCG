#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)157;
unsigned long long int var_10 = 2556743099038968270ULL;
unsigned char var_14 = (unsigned char)211;
int zero = 0;
signed char var_15 = (signed char)28;
unsigned short var_16 = (unsigned short)54382;
unsigned short var_17 = (unsigned short)25384;
short var_18 = (short)20835;
int var_19 = -1955688739;
short var_20 = (short)-31600;
long long int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 7378013924419076375LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
