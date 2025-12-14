#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1447330394;
unsigned short var_3 = (unsigned short)35226;
short var_4 = (short)9462;
unsigned long long int var_7 = 15417914204241219703ULL;
int zero = 0;
short var_13 = (short)2774;
short var_14 = (short)5226;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
