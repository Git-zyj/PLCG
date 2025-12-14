#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 794367384269696737ULL;
short var_2 = (short)-4905;
unsigned char var_6 = (unsigned char)44;
int zero = 0;
unsigned int var_11 = 3436983754U;
unsigned short var_12 = (unsigned short)34579;
short var_13 = (short)-26463;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
