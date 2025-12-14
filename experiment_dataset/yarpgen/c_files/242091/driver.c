#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15661659702224417256ULL;
unsigned long long int var_3 = 9458218363940237648ULL;
unsigned int var_13 = 2966661244U;
int zero = 0;
short var_17 = (short)-4526;
unsigned short var_18 = (unsigned short)38955;
unsigned short var_19 = (unsigned short)18071;
unsigned short var_20 = (unsigned short)25897;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
