#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
int var_1 = 1823588288;
unsigned int var_2 = 3021801065U;
long long int var_7 = 3327196137145686631LL;
int zero = 0;
unsigned int var_14 = 740097787U;
unsigned short var_15 = (unsigned short)48722;
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
