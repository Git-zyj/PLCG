#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6564469648349621178LL;
unsigned short var_1 = (unsigned short)50671;
signed char var_6 = (signed char)-2;
signed char var_8 = (signed char)51;
unsigned char var_10 = (unsigned char)197;
int zero = 0;
signed char var_11 = (signed char)13;
unsigned int var_12 = 751096181U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
