#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17817;
_Bool var_2 = (_Bool)1;
unsigned int var_5 = 2870592606U;
int var_6 = -1348529326;
unsigned int var_13 = 420990039U;
int zero = 0;
unsigned char var_15 = (unsigned char)98;
unsigned long long int var_16 = 7697313711267897245ULL;
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
