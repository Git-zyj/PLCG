#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4437118437138653693ULL;
unsigned long long int var_5 = 16557526064327612538ULL;
unsigned int var_6 = 1628131949U;
unsigned short var_9 = (unsigned short)55239;
long long int var_11 = 957765910307325713LL;
int zero = 0;
unsigned char var_15 = (unsigned char)181;
signed char var_16 = (signed char)58;
short var_17 = (short)3186;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
