#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3294358972U;
unsigned long long int var_2 = 4349702110945985947ULL;
unsigned long long int var_6 = 18277625057527890816ULL;
signed char var_9 = (signed char)-95;
int var_11 = 432693794;
unsigned int var_15 = 2448408542U;
unsigned char var_18 = (unsigned char)212;
int zero = 0;
int var_20 = -1594390821;
long long int var_21 = 1695008747305029362LL;
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
