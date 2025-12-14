#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 168484291389063153LL;
unsigned int var_2 = 2903812891U;
unsigned int var_3 = 3098933373U;
long long int var_5 = -8730272374119296447LL;
long long int var_7 = -6236179683384824854LL;
short var_9 = (short)-29603;
unsigned char var_12 = (unsigned char)179;
int zero = 0;
unsigned int var_13 = 2334128163U;
unsigned short var_14 = (unsigned short)61221;
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
