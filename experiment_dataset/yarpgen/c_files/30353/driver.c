#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12031915479946680910ULL;
unsigned int var_1 = 962905212U;
unsigned int var_2 = 388154542U;
unsigned int var_3 = 1480646953U;
unsigned int var_4 = 2962191195U;
unsigned long long int var_5 = 9079984008976679967ULL;
unsigned int var_7 = 2695414510U;
unsigned int var_9 = 3446435369U;
int zero = 0;
unsigned int var_10 = 2227163319U;
unsigned long long int var_11 = 224199817431860508ULL;
unsigned int var_12 = 3996170048U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
