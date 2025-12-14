#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2926888325399555507LL;
long long int var_4 = -1945849684319413208LL;
unsigned char var_5 = (unsigned char)4;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)20155;
unsigned long long int var_13 = 12326417515645069238ULL;
int zero = 0;
unsigned long long int var_18 = 3740684243037497611ULL;
unsigned char var_19 = (unsigned char)40;
void init() {
}

void checksum() {
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
