#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
unsigned long long int var_2 = 9508127259590774896ULL;
unsigned long long int var_8 = 18101526946422460188ULL;
int zero = 0;
long long int var_18 = 4991140079439443903LL;
unsigned int var_19 = 3306802556U;
void init() {
}

void checksum() {
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
