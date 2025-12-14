#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
long long int var_3 = 1872419951139967870LL;
unsigned long long int var_9 = 13036628134813570704ULL;
unsigned char var_10 = (unsigned char)231;
unsigned int var_13 = 645764628U;
int var_15 = -1222328207;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5660823863755378627ULL;
short var_22 = (short)7964;
unsigned char var_23 = (unsigned char)108;
short var_24 = (short)22427;
unsigned short var_25 = (unsigned short)14442;
int var_26 = 137122193;
unsigned short var_27 = (unsigned short)54430;
unsigned char arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)86;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
