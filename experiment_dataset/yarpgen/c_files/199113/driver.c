#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-27;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)21534;
signed char var_14 = (signed char)-107;
int zero = 0;
long long int var_15 = -2308508612484215306LL;
short var_16 = (short)24500;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
