#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
unsigned long long int var_10 = 3728837380110194055ULL;
unsigned int var_12 = 3237055221U;
unsigned short var_14 = (unsigned short)21905;
int zero = 0;
unsigned long long int var_19 = 11260630924152424618ULL;
short var_20 = (short)-1436;
void init() {
}

void checksum() {
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
