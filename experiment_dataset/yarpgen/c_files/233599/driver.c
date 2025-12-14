#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9573440021844845500ULL;
unsigned short var_5 = (unsigned short)40482;
unsigned short var_8 = (unsigned short)1407;
unsigned int var_9 = 2031727037U;
int zero = 0;
unsigned int var_10 = 4010195505U;
short var_11 = (short)18218;
short var_12 = (short)4445;
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
