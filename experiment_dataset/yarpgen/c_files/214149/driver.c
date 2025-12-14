#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned int var_1 = 4056822793U;
unsigned int var_2 = 950070545U;
unsigned int var_5 = 4183589359U;
signed char var_6 = (signed char)-125;
int var_9 = 1907234519;
unsigned int var_14 = 905275931U;
unsigned int var_16 = 4078447581U;
unsigned int var_19 = 3854789187U;
int zero = 0;
unsigned int var_20 = 1605404214U;
unsigned int var_21 = 342177716U;
unsigned int var_22 = 1847246139U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
