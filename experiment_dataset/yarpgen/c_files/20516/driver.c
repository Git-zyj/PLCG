#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4823674133448452927ULL;
signed char var_3 = (signed char)12;
unsigned long long int var_5 = 8056695618478589946ULL;
int var_6 = 951361202;
unsigned short var_7 = (unsigned short)162;
unsigned char var_8 = (unsigned char)39;
signed char var_9 = (signed char)-18;
int zero = 0;
signed char var_10 = (signed char)-18;
int var_11 = -290040707;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
