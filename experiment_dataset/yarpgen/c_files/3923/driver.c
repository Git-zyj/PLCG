#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4571064964983768211LL;
short var_4 = (short)-896;
long long int var_6 = 5572466022559618982LL;
long long int var_13 = 4196267899786103939LL;
int zero = 0;
short var_18 = (short)39;
long long int var_19 = -6991677314105910615LL;
unsigned char var_20 = (unsigned char)171;
unsigned char var_21 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
