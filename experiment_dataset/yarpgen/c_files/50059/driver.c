#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 923515348U;
unsigned short var_4 = (unsigned short)60367;
unsigned short var_6 = (unsigned short)12356;
unsigned int var_8 = 803143476U;
unsigned long long int var_12 = 1608699024039334923ULL;
int zero = 0;
unsigned long long int var_13 = 15995788441394364564ULL;
unsigned short var_14 = (unsigned short)24285;
signed char var_15 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
