#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-62;
signed char var_6 = (signed char)26;
unsigned short var_7 = (unsigned short)61842;
int var_9 = -1054571985;
unsigned char var_14 = (unsigned char)128;
int zero = 0;
unsigned int var_16 = 1015136573U;
unsigned long long int var_17 = 15228728930123564124ULL;
unsigned char var_18 = (unsigned char)106;
void init() {
}

void checksum() {
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
