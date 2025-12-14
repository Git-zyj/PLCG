#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)4;
long long int var_7 = 1399588405407304384LL;
unsigned char var_8 = (unsigned char)232;
unsigned int var_9 = 3594113142U;
int var_10 = -619398940;
int zero = 0;
long long int var_14 = 521567993897516164LL;
int var_15 = 313466308;
long long int var_16 = -6599392904941768329LL;
void init() {
}

void checksum() {
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
