#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10432354857811205920ULL;
int var_2 = -1869834856;
unsigned long long int var_5 = 15852809907328491957ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)10591;
unsigned short var_8 = (unsigned short)16104;
unsigned short var_10 = (unsigned short)14265;
int zero = 0;
unsigned char var_11 = (unsigned char)171;
unsigned int var_12 = 4257096112U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
