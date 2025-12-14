#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)38;
unsigned short var_4 = (unsigned short)9207;
int var_6 = -518204581;
int var_7 = -1005992135;
unsigned int var_14 = 2497046499U;
int zero = 0;
short var_15 = (short)25995;
int var_16 = -904343383;
unsigned long long int var_17 = 9878874836563652364ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
