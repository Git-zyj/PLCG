#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2872;
long long int var_2 = 2761779868572152462LL;
unsigned int var_3 = 1938752795U;
_Bool var_6 = (_Bool)0;
long long int var_9 = 7684593067256243814LL;
unsigned short var_11 = (unsigned short)8900;
unsigned short var_12 = (unsigned short)21195;
long long int var_13 = -5636994343378067196LL;
int zero = 0;
long long int var_14 = -7019614094305856440LL;
unsigned short var_15 = (unsigned short)15435;
short var_16 = (short)27634;
unsigned short var_17 = (unsigned short)37942;
unsigned short var_18 = (unsigned short)32581;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
