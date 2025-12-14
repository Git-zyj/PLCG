#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11764;
unsigned long long int var_4 = 4430451038681510331ULL;
unsigned long long int var_9 = 7617572184145792309ULL;
int zero = 0;
short var_12 = (short)-31356;
short var_13 = (short)19283;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
