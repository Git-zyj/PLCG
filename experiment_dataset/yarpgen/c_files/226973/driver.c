#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18285;
unsigned int var_5 = 2172040199U;
long long int var_8 = -3009139402360498578LL;
unsigned short var_9 = (unsigned short)10408;
signed char var_11 = (signed char)-54;
unsigned short var_14 = (unsigned short)25241;
int zero = 0;
int var_15 = 984859540;
unsigned int var_16 = 2424293915U;
signed char var_17 = (signed char)32;
long long int var_18 = -7239085115376501639LL;
void init() {
}

void checksum() {
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
