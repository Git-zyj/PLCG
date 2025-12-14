#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)1;
unsigned short var_3 = (unsigned short)28830;
unsigned long long int var_4 = 1118808737260898334ULL;
unsigned int var_6 = 2965750774U;
int zero = 0;
unsigned int var_13 = 1666435977U;
unsigned int var_14 = 3514812117U;
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
