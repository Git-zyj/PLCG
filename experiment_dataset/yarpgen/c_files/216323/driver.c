#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)37;
signed char var_8 = (signed char)-37;
signed char var_9 = (signed char)32;
int var_11 = 1938273958;
int zero = 0;
unsigned char var_15 = (unsigned char)84;
unsigned long long int var_16 = 17149414776875290730ULL;
signed char var_17 = (signed char)-100;
unsigned int var_18 = 492476096U;
int var_19 = -1928678306;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
