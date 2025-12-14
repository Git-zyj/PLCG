#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
short var_2 = (short)-7164;
int var_3 = 349916686;
unsigned long long int var_9 = 4588953651670402763ULL;
int zero = 0;
int var_11 = 1455334181;
short var_12 = (short)-28829;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
