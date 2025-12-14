#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32354;
unsigned char var_5 = (unsigned char)53;
unsigned short var_7 = (unsigned short)2502;
unsigned char var_9 = (unsigned char)135;
short var_10 = (short)13131;
signed char var_13 = (signed char)46;
int zero = 0;
int var_14 = -1134573411;
int var_15 = -1329009966;
unsigned long long int var_16 = 12143577348318818450ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
