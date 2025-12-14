#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
unsigned int var_4 = 595908913U;
unsigned char var_7 = (unsigned char)159;
unsigned int var_8 = 257278945U;
unsigned long long int var_9 = 16834487805287788215ULL;
int zero = 0;
short var_13 = (short)8600;
unsigned short var_14 = (unsigned short)27731;
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
