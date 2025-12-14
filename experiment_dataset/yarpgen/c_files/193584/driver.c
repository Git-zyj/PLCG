#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned char var_6 = (unsigned char)166;
int var_9 = -529634960;
int zero = 0;
unsigned short var_20 = (unsigned short)64870;
unsigned int var_21 = 848017451U;
unsigned long long int var_22 = 5751270749736785475ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
