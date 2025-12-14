#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34409;
unsigned int var_2 = 2476864811U;
unsigned int var_5 = 2606628717U;
int var_8 = 1991769705;
unsigned int var_9 = 1797297967U;
int zero = 0;
unsigned short var_20 = (unsigned short)36726;
unsigned long long int var_21 = 18353492148112201588ULL;
long long int var_22 = -7697185534736295938LL;
unsigned short var_23 = (unsigned short)5626;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
