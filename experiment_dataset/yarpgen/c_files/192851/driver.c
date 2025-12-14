#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7684;
long long int var_3 = -9196306952013454781LL;
unsigned int var_5 = 2195000686U;
short var_7 = (short)-6489;
int zero = 0;
unsigned char var_15 = (unsigned char)166;
long long int var_16 = -5398597050204113534LL;
void init() {
}

void checksum() {
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
