#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10555468038341056758ULL;
unsigned int var_4 = 2737437085U;
unsigned int var_5 = 116607210U;
unsigned long long int var_9 = 10328435947834569947ULL;
int zero = 0;
unsigned int var_10 = 153198823U;
signed char var_11 = (signed char)66;
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
