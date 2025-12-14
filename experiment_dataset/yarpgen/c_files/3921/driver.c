#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1562865624U;
unsigned int var_1 = 3220819341U;
unsigned int var_3 = 3309993871U;
unsigned int var_4 = 1953062936U;
unsigned int var_6 = 1326147255U;
unsigned int var_8 = 871797910U;
unsigned int var_11 = 1430249242U;
unsigned int var_12 = 391402795U;
unsigned int var_13 = 2356747405U;
unsigned int var_16 = 971153809U;
unsigned int var_18 = 715290940U;
int zero = 0;
unsigned int var_19 = 533682523U;
unsigned int var_20 = 1807634322U;
void init() {
}

void checksum() {
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
