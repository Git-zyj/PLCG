#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1749569744;
unsigned short var_8 = (unsigned short)31997;
unsigned short var_13 = (unsigned short)21376;
unsigned short var_14 = (unsigned short)25273;
int var_15 = 1695786168;
int zero = 0;
int var_19 = -1143128677;
int var_20 = 1386276475;
unsigned short var_21 = (unsigned short)29354;
int var_22 = -2085019473;
unsigned short var_23 = (unsigned short)19721;
int var_24 = 548783261;
int var_25 = -2047525953;
int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 1931417060;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
