#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
unsigned long long int var_6 = 1804383542714177674ULL;
unsigned int var_9 = 4009402476U;
signed char var_10 = (signed char)-35;
signed char var_15 = (signed char)-72;
unsigned int var_17 = 3405551843U;
int zero = 0;
long long int var_18 = -8323714687909100104LL;
int var_19 = -1574156717;
long long int var_20 = -5472718002140901512LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
