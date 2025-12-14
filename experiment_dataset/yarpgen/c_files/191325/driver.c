#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50416;
unsigned short var_3 = (unsigned short)37797;
unsigned long long int var_5 = 17306408236162908287ULL;
unsigned long long int var_6 = 5259887947469164094ULL;
long long int var_9 = 7673051900320010373LL;
signed char var_12 = (signed char)-100;
int zero = 0;
long long int var_14 = -7931758316289452985LL;
unsigned long long int var_15 = 3510128195477431962ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
