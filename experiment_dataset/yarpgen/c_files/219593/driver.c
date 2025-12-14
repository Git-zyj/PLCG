#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned short var_1 = (unsigned short)56118;
unsigned int var_4 = 2678548331U;
unsigned long long int var_9 = 5380017692800070782ULL;
unsigned long long int var_17 = 13983334795679290667ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)27;
int var_19 = -61838860;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
