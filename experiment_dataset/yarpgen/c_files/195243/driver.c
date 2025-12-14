#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3550677224U;
int var_6 = 411056137;
long long int var_7 = 458699310496404465LL;
short var_14 = (short)-12527;
int zero = 0;
long long int var_16 = -8251162238082571737LL;
unsigned int var_17 = 904933273U;
int var_18 = -197441075;
short var_19 = (short)-6807;
short var_20 = (short)13590;
unsigned char var_21 = (unsigned char)109;
unsigned int arr_0 [21] ;
int arr_1 [21] [21] ;
int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3621135684U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1296906233;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -2116748924;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
