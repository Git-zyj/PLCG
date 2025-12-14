#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2504234826U;
unsigned char var_6 = (unsigned char)181;
unsigned short var_12 = (unsigned short)32554;
long long int var_14 = -5939888591977457132LL;
int zero = 0;
unsigned char var_19 = (unsigned char)238;
unsigned char var_20 = (unsigned char)35;
long long int var_21 = -1731510949314199370LL;
void init() {
}

void checksum() {
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
