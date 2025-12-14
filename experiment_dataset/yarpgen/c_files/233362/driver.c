#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)64652;
int var_12 = -1114886054;
unsigned long long int var_13 = 4128467578865343506ULL;
int zero = 0;
unsigned int var_14 = 302844712U;
unsigned short var_15 = (unsigned short)53424;
unsigned long long int var_16 = 17425533719563167082ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
