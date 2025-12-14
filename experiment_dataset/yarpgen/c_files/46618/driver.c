#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12774;
unsigned short var_3 = (unsigned short)40507;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)73;
int zero = 0;
unsigned long long int var_16 = 3062905075842690920ULL;
unsigned short var_17 = (unsigned short)34369;
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
