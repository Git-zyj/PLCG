#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5314893950955421815LL;
int var_9 = 1682173204;
unsigned short var_12 = (unsigned short)22978;
unsigned int var_16 = 355857869U;
int zero = 0;
int var_18 = -2030744616;
unsigned short var_19 = (unsigned short)62775;
long long int var_20 = 8345123233109924948LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
