#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13191192127282232705ULL;
unsigned char var_2 = (unsigned char)53;
signed char var_4 = (signed char)-73;
_Bool var_5 = (_Bool)1;
int var_8 = -128107254;
unsigned int var_9 = 1859268823U;
signed char var_10 = (signed char)7;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3889247888247858059LL;
void init() {
}

void checksum() {
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
