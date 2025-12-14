#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
int var_4 = 1138456240;
long long int var_7 = -4868500425800937853LL;
long long int var_10 = -2308915132844785484LL;
long long int var_11 = 2062788041541475065LL;
unsigned short var_14 = (unsigned short)17500;
long long int var_17 = -6074372902612398873LL;
int zero = 0;
unsigned long long int var_20 = 3493613267842715456ULL;
unsigned short var_21 = (unsigned short)31218;
unsigned short var_22 = (unsigned short)45012;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1157185816;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
