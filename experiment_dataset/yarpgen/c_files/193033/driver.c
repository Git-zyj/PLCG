#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3709761954U;
short var_6 = (short)-25984;
short var_9 = (short)-5435;
int zero = 0;
unsigned long long int var_10 = 8877049250238412299ULL;
unsigned long long int var_11 = 4285987330005721379ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
