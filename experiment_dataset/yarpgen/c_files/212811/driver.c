#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1485048081U;
unsigned short var_3 = (unsigned short)45919;
unsigned short var_5 = (unsigned short)49313;
unsigned int var_9 = 2769272471U;
unsigned int var_10 = 936372015U;
int zero = 0;
unsigned int var_16 = 4010584503U;
unsigned short var_17 = (unsigned short)53975;
long long int var_18 = -7818592276951269058LL;
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
