#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28221;
signed char var_5 = (signed char)-107;
signed char var_9 = (signed char)-125;
int var_14 = -1219551843;
signed char var_16 = (signed char)-7;
signed char var_18 = (signed char)-94;
int var_19 = 314627521;
int zero = 0;
int var_20 = -2013471177;
signed char var_21 = (signed char)57;
void init() {
}

void checksum() {
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
