#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
unsigned char var_1 = (unsigned char)201;
unsigned char var_2 = (unsigned char)196;
unsigned char var_3 = (unsigned char)96;
int var_4 = -1475173764;
long long int var_5 = 756059777136908171LL;
unsigned char var_6 = (unsigned char)216;
unsigned int var_7 = 1218730767U;
int var_8 = 1171385060;
unsigned char var_9 = (unsigned char)53;
unsigned int var_10 = 1112519903U;
int zero = 0;
unsigned short var_11 = (unsigned short)5832;
long long int var_12 = -1680807663638985411LL;
int var_13 = -1394817006;
int var_14 = 1357149141;
unsigned char var_15 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
