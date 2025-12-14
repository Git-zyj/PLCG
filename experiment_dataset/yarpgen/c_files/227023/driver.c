#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-18184;
int var_5 = 1018115747;
short var_8 = (short)-29040;
unsigned short var_10 = (unsigned short)9645;
int zero = 0;
unsigned char var_17 = (unsigned char)192;
unsigned char var_18 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
