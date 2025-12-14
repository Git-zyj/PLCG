#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)47;
unsigned long long int var_4 = 13918685530109795277ULL;
unsigned int var_5 = 3821844704U;
signed char var_6 = (signed char)-67;
signed char var_10 = (signed char)87;
signed char var_12 = (signed char)-56;
int zero = 0;
signed char var_13 = (signed char)-106;
unsigned long long int var_14 = 8894626823374812679ULL;
signed char var_15 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
