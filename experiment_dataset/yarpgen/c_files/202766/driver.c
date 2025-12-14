#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 18023593531273092298ULL;
unsigned char var_11 = (unsigned char)28;
short var_12 = (short)-803;
unsigned char var_14 = (unsigned char)70;
int zero = 0;
unsigned int var_17 = 2376430127U;
unsigned long long int var_18 = 7349045229992453648ULL;
unsigned long long int var_19 = 15151145789724384782ULL;
signed char var_20 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
