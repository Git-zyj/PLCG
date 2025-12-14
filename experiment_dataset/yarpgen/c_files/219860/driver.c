#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned int var_2 = 3307456171U;
unsigned char var_4 = (unsigned char)189;
unsigned short var_6 = (unsigned short)39773;
unsigned char var_9 = (unsigned char)35;
unsigned long long int var_15 = 1496229204827047458ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)59646;
signed char var_19 = (signed char)36;
unsigned long long int var_20 = 14394589092092922703ULL;
unsigned char var_21 = (unsigned char)180;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 959907875;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
