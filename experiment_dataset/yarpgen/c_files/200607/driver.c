#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 40577877930682442ULL;
long long int var_9 = -2576702861445054471LL;
signed char var_12 = (signed char)95;
unsigned char var_13 = (unsigned char)119;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)137;
int zero = 0;
unsigned char var_17 = (unsigned char)72;
signed char var_18 = (signed char)97;
void init() {
}

void checksum() {
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
