#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned char var_5 = (unsigned char)188;
unsigned long long int var_7 = 9543201345195126464ULL;
unsigned short var_9 = (unsigned short)10315;
short var_10 = (short)31415;
int zero = 0;
unsigned long long int var_12 = 9833995292631318212ULL;
int var_13 = 1684892131;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)33903;
signed char var_16 = (signed char)6;
unsigned long long int var_17 = 10156206461162135435ULL;
unsigned char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)64;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
