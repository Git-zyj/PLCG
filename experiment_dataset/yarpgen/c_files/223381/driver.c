#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2549431063U;
unsigned char var_5 = (unsigned char)237;
unsigned char var_6 = (unsigned char)98;
int var_9 = -1228207055;
long long int var_14 = -5689594674911494183LL;
int zero = 0;
unsigned short var_16 = (unsigned short)8414;
unsigned short var_17 = (unsigned short)50661;
unsigned int var_18 = 405310811U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
