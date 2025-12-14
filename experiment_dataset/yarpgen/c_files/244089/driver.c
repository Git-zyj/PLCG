#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)20637;
long long int var_8 = -1025417601738094308LL;
unsigned char var_9 = (unsigned char)107;
long long int var_10 = -3415050772693796374LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)88;
unsigned char var_19 = (unsigned char)174;
unsigned int var_20 = 2526248519U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
