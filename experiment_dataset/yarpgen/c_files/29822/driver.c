#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -166431630;
unsigned int var_1 = 3454736992U;
signed char var_4 = (signed char)-34;
unsigned char var_6 = (unsigned char)115;
unsigned long long int var_9 = 5987378987776134630ULL;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
int var_20 = -406614893;
unsigned int var_21 = 1058687122U;
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
