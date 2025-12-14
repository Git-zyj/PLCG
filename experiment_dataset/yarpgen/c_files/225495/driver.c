#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9012157439768664691ULL;
unsigned short var_8 = (unsigned short)19569;
int zero = 0;
unsigned int var_19 = 2065818440U;
unsigned short var_20 = (unsigned short)36593;
unsigned short var_21 = (unsigned short)60180;
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
