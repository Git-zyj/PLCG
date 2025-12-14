#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 189665959U;
unsigned long long int var_4 = 6419661091977740461ULL;
unsigned char var_6 = (unsigned char)128;
unsigned int var_9 = 657523688U;
int zero = 0;
short var_11 = (short)10875;
unsigned int var_12 = 3117323130U;
int var_13 = 1863272731;
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
