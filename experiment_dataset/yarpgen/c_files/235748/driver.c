#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1430645442;
unsigned int var_8 = 765210677U;
long long int var_9 = 4478081826385798302LL;
long long int var_15 = 900740325417201861LL;
int zero = 0;
int var_20 = 93313096;
unsigned short var_21 = (unsigned short)33414;
signed char var_22 = (signed char)-51;
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
