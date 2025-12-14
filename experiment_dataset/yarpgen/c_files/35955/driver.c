#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19122;
int var_2 = 883031086;
unsigned long long int var_4 = 2426273145952004029ULL;
long long int var_6 = 5645820100037659657LL;
long long int var_7 = 4623324409961647112LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = 4408474232510185256LL;
unsigned char var_11 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
