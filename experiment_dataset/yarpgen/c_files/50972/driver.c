#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)155;
unsigned int var_8 = 404951228U;
unsigned char var_9 = (unsigned char)125;
int zero = 0;
unsigned short var_11 = (unsigned short)50210;
unsigned char var_12 = (unsigned char)125;
int var_13 = -604833489;
unsigned char var_14 = (unsigned char)135;
int var_15 = 154388252;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 3483910962U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
