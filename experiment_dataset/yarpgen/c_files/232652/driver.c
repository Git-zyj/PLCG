#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2086076351;
unsigned int var_5 = 2445294878U;
unsigned long long int var_8 = 4846214848259409570ULL;
unsigned long long int var_9 = 15159462536029860668ULL;
unsigned short var_10 = (unsigned short)26963;
unsigned int var_11 = 3839561656U;
int zero = 0;
signed char var_13 = (signed char)-120;
unsigned int var_14 = 4184564776U;
signed char var_15 = (signed char)17;
unsigned short var_16 = (unsigned short)6841;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
