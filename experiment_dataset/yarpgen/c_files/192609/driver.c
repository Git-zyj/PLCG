#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9718390446853023442ULL;
unsigned int var_7 = 605894641U;
unsigned short var_9 = (unsigned short)22787;
int zero = 0;
unsigned short var_13 = (unsigned short)5499;
signed char var_14 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
