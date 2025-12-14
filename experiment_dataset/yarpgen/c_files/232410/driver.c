#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8623895861424049208ULL;
signed char var_12 = (signed char)26;
unsigned long long int var_13 = 9417297633053061879ULL;
unsigned long long int var_14 = 12643846712518501170ULL;
unsigned short var_16 = (unsigned short)20393;
int zero = 0;
short var_18 = (short)26223;
long long int var_19 = -3946400551602166421LL;
unsigned int var_20 = 2641817398U;
unsigned char var_21 = (unsigned char)161;
short var_22 = (short)19756;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
