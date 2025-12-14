#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 12944934826109556206ULL;
unsigned short var_2 = (unsigned short)12733;
unsigned long long int var_4 = 11175782343818178181ULL;
short var_7 = (short)31069;
short var_9 = (short)16485;
unsigned short var_10 = (unsigned short)1664;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13280869222417800800ULL;
unsigned short var_13 = (unsigned short)53637;
unsigned long long int var_14 = 208314902157857940ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
