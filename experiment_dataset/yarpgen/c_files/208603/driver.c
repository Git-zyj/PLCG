#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5356;
unsigned char var_4 = (unsigned char)36;
unsigned int var_7 = 690159415U;
long long int var_8 = 618469311193747528LL;
long long int var_12 = -3923213876962908708LL;
unsigned short var_15 = (unsigned short)62877;
int zero = 0;
unsigned int var_16 = 2532921717U;
unsigned short var_17 = (unsigned short)50299;
unsigned int var_18 = 4154099617U;
unsigned char var_19 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
