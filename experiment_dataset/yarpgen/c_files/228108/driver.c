#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
int var_4 = 977382539;
short var_11 = (short)-25492;
unsigned int var_13 = 2544076273U;
unsigned int var_15 = 1428858528U;
short var_17 = (short)1611;
int zero = 0;
unsigned long long int var_18 = 10510018405198370846ULL;
unsigned char var_19 = (unsigned char)228;
unsigned int var_20 = 3301187930U;
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
