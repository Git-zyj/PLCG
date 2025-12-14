#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1203756348;
unsigned int var_5 = 749563287U;
signed char var_9 = (signed char)89;
int var_15 = 299968799;
signed char var_19 = (signed char)90;
int zero = 0;
signed char var_20 = (signed char)-4;
long long int var_21 = -6333588867328429396LL;
void init() {
}

void checksum() {
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
