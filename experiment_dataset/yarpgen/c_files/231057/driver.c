#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20309;
unsigned int var_9 = 4156151006U;
short var_10 = (short)1168;
int var_12 = 266707167;
int zero = 0;
unsigned char var_19 = (unsigned char)158;
long long int var_20 = 3564376242693252407LL;
long long int var_21 = -1461554167981707528LL;
short var_22 = (short)29600;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
