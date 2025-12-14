#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13576991900707417162ULL;
unsigned short var_2 = (unsigned short)46692;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)35263;
unsigned short var_15 = (unsigned short)57029;
unsigned long long int var_17 = 11946550624704055400ULL;
unsigned int var_18 = 72561856U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4707385565696222540ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
