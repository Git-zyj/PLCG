#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 933994009;
unsigned short var_5 = (unsigned short)53728;
int var_13 = -273069642;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -717917019;
unsigned char var_19 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
