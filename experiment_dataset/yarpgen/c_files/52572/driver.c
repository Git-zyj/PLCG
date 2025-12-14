#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4854186133983414938ULL;
unsigned short var_3 = (unsigned short)27121;
signed char var_6 = (signed char)77;
unsigned long long int var_7 = 12922675562367134960ULL;
signed char var_9 = (signed char)45;
unsigned int var_10 = 454352777U;
unsigned long long int var_11 = 7898437870548938919ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)24035;
int var_14 = 277428588;
unsigned char var_15 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
