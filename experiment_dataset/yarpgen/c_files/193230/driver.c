#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34710;
unsigned short var_3 = (unsigned short)11915;
unsigned long long int var_7 = 7096662494494722198ULL;
unsigned int var_9 = 3226546261U;
int zero = 0;
unsigned char var_13 = (unsigned char)170;
unsigned long long int var_14 = 16056806611821730131ULL;
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
