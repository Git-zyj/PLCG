#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)59353;
long long int var_10 = -440604861219297382LL;
long long int var_11 = -3541260922567138875LL;
unsigned char var_14 = (unsigned char)138;
short var_15 = (short)-31222;
long long int var_16 = -1715636356109229508LL;
int zero = 0;
unsigned char var_18 = (unsigned char)129;
int var_19 = -521298343;
unsigned int var_20 = 4042714966U;
int var_21 = -575176234;
unsigned short arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51084 : (unsigned short)63371;
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
