#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 684698421U;
long long int var_3 = 1850137865303898230LL;
unsigned char var_5 = (unsigned char)174;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14830697144886208740ULL;
long long int var_9 = 8392404923647164659LL;
unsigned char var_10 = (unsigned char)16;
int zero = 0;
unsigned int var_13 = 2691313514U;
unsigned int var_14 = 1307418373U;
void init() {
}

void checksum() {
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
