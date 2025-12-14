#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-62;
unsigned int var_3 = 2385604381U;
unsigned long long int var_5 = 16351620049250106370ULL;
signed char var_6 = (signed char)84;
int zero = 0;
unsigned long long int var_10 = 5446330714841205719ULL;
unsigned long long int var_11 = 2341755159924261025ULL;
unsigned int var_12 = 1286446545U;
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
