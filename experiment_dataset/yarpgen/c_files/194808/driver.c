#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5617791700064232334LL;
unsigned long long int var_2 = 2676224387301048774ULL;
unsigned short var_3 = (unsigned short)22320;
int var_8 = -1673075261;
unsigned long long int var_9 = 11848698949090724046ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)141;
signed char var_13 = (signed char)-18;
void init() {
}

void checksum() {
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
