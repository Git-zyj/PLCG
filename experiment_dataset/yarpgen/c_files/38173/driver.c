#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 901915143130429619ULL;
unsigned long long int var_1 = 2217355421779018552ULL;
unsigned char var_2 = (unsigned char)7;
unsigned char var_8 = (unsigned char)240;
long long int var_10 = -4801532415986573505LL;
int zero = 0;
long long int var_19 = 7320288954173994930LL;
unsigned char var_20 = (unsigned char)223;
void init() {
}

void checksum() {
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
