#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 369102226134898357LL;
short var_4 = (short)-7401;
int var_9 = 1233669526;
int var_14 = -1292164734;
long long int var_18 = 6488864383643480944LL;
unsigned long long int var_19 = 11387773144030535957ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)35500;
unsigned short var_21 = (unsigned short)53662;
int var_22 = 362304116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
