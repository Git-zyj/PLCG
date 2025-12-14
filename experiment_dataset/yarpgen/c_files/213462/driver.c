#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 3833528355394682395ULL;
unsigned long long int var_16 = 16991487840872556590ULL;
unsigned short var_17 = (unsigned short)57846;
int zero = 0;
unsigned char var_18 = (unsigned char)101;
long long int var_19 = -4568558323181649428LL;
int var_20 = -1402683585;
int var_21 = 603295215;
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
