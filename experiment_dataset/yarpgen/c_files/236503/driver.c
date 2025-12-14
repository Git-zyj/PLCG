#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1008475956;
unsigned long long int var_1 = 1900860389987331512ULL;
unsigned char var_5 = (unsigned char)121;
unsigned long long int var_6 = 2734928069939855049ULL;
unsigned int var_12 = 3824542339U;
short var_13 = (short)-10822;
short var_14 = (short)21100;
int var_15 = 12681414;
int zero = 0;
unsigned long long int var_20 = 9382326954726666637ULL;
short var_21 = (short)16144;
int var_22 = -149708591;
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
