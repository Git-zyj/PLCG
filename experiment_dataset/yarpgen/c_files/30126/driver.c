#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50757;
long long int var_4 = -2791370386689721739LL;
unsigned int var_16 = 1876128855U;
int zero = 0;
unsigned int var_19 = 1857264623U;
unsigned int var_20 = 693253823U;
unsigned int var_21 = 3308838447U;
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
