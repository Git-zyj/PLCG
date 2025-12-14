#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)22760;
signed char var_8 = (signed char)3;
unsigned int var_12 = 838977816U;
signed char var_15 = (signed char)-102;
int zero = 0;
long long int var_20 = -2899281798908618637LL;
long long int var_21 = -331322128424118750LL;
unsigned short var_22 = (unsigned short)25086;
void init() {
}

void checksum() {
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
