#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4031328349598755440ULL;
unsigned long long int var_4 = 1537816872261373992ULL;
unsigned char var_8 = (unsigned char)223;
unsigned char var_10 = (unsigned char)23;
int zero = 0;
short var_19 = (short)-12122;
unsigned int var_20 = 783036233U;
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
