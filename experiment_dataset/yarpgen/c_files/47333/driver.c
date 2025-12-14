#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4143858861597789904ULL;
signed char var_3 = (signed char)-43;
long long int var_13 = -2909806417016177342LL;
int zero = 0;
unsigned long long int var_16 = 1212205904618177213ULL;
unsigned short var_17 = (unsigned short)11115;
void init() {
}

void checksum() {
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
