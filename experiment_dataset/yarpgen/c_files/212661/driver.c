#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -201752399;
unsigned short var_2 = (unsigned short)9661;
signed char var_3 = (signed char)119;
unsigned int var_4 = 4159287271U;
unsigned int var_5 = 2439531033U;
short var_6 = (short)5011;
unsigned int var_9 = 2589921273U;
int zero = 0;
long long int var_11 = -1227107550080306004LL;
unsigned char var_12 = (unsigned char)37;
unsigned char var_13 = (unsigned char)154;
signed char var_14 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
