#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned int var_1 = 1004293378U;
unsigned int var_4 = 2080841065U;
long long int var_7 = -3521320590163137926LL;
unsigned short var_8 = (unsigned short)40770;
short var_10 = (short)15975;
int var_12 = -115207079;
int zero = 0;
unsigned int var_15 = 169826153U;
unsigned char var_16 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
