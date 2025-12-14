#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7450766803426585236ULL;
unsigned char var_1 = (unsigned char)113;
short var_3 = (short)19935;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)21;
signed char var_7 = (signed char)-72;
unsigned char var_8 = (unsigned char)245;
long long int var_9 = -5062607522282857578LL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)23597;
int zero = 0;
unsigned int var_13 = 838433485U;
long long int var_14 = 6316755989453705302LL;
signed char var_15 = (signed char)11;
void init() {
}

void checksum() {
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
