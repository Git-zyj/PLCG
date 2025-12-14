#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3384536859741548205LL;
int var_1 = 1667859755;
unsigned int var_5 = 4111326719U;
unsigned long long int var_8 = 13198670622090774513ULL;
signed char var_9 = (signed char)-97;
int zero = 0;
unsigned int var_10 = 2563514052U;
unsigned char var_11 = (unsigned char)77;
signed char var_12 = (signed char)44;
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
