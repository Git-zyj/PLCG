#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 423401635;
int var_3 = -1481975375;
short var_5 = (short)-31019;
int var_11 = 649815227;
int var_12 = 1407876586;
int zero = 0;
unsigned short var_14 = (unsigned short)62475;
short var_15 = (short)-21085;
unsigned char var_16 = (unsigned char)115;
int var_17 = -278029801;
long long int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1163459936728002337LL : 1164050963004183118LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
