#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
signed char var_1 = (signed char)-77;
int var_2 = -1897381064;
unsigned long long int var_9 = 17918602685339782378ULL;
int zero = 0;
unsigned int var_10 = 2532198541U;
signed char var_11 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
