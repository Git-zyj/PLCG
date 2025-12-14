#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12343721413419550081ULL;
signed char var_8 = (signed char)-123;
unsigned char var_9 = (unsigned char)125;
signed char var_10 = (signed char)-114;
signed char var_11 = (signed char)45;
int zero = 0;
signed char var_12 = (signed char)-34;
signed char var_13 = (signed char)95;
signed char var_14 = (signed char)25;
unsigned char var_15 = (unsigned char)192;
unsigned long long int var_16 = 9092865356392786368ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
