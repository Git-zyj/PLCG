#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)22263;
unsigned char var_8 = (unsigned char)169;
unsigned short var_11 = (unsigned short)59092;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 16130828956246511218ULL;
unsigned long long int var_19 = 17761703119607025235ULL;
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
