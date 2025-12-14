#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3027954031U;
signed char var_10 = (signed char)-124;
unsigned int var_11 = 3869481057U;
long long int var_12 = 758991072606402803LL;
int var_14 = -1826130558;
int zero = 0;
unsigned int var_17 = 3243216298U;
unsigned char var_18 = (unsigned char)32;
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
