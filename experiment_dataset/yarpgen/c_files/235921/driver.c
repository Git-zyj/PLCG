#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-31381;
unsigned char var_9 = (unsigned char)223;
unsigned char var_11 = (unsigned char)48;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2000476320367636299ULL;
unsigned short var_15 = (unsigned short)51301;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)26;
void init() {
}

void checksum() {
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
