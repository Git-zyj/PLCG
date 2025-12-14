#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11554139073374984494ULL;
unsigned int var_3 = 3192247394U;
long long int var_11 = 5369255316440329470LL;
unsigned short var_13 = (unsigned short)721;
short var_15 = (short)11915;
int zero = 0;
long long int var_17 = -7112031662466519561LL;
int var_18 = 225274866;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
