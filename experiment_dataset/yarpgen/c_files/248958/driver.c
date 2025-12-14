#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53628;
long long int var_4 = -3886840072960560323LL;
unsigned short var_5 = (unsigned short)47778;
unsigned int var_7 = 3564025970U;
int var_12 = 228851823;
int zero = 0;
unsigned int var_16 = 4251544117U;
short var_17 = (short)-16081;
unsigned long long int var_18 = 9520493837865549595ULL;
long long int var_19 = -1721801090685599649LL;
unsigned short var_20 = (unsigned short)1514;
unsigned long long int var_21 = 15454499743738225061ULL;
unsigned char arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)92;
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
