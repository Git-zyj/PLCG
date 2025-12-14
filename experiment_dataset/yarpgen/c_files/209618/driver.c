#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12197006908414172372ULL;
unsigned int var_2 = 2149864357U;
unsigned char var_7 = (unsigned char)122;
unsigned long long int var_9 = 13913298604550920232ULL;
short var_11 = (short)-29719;
unsigned char var_12 = (unsigned char)46;
int zero = 0;
unsigned long long int var_13 = 12394634374385003212ULL;
unsigned char var_14 = (unsigned char)155;
unsigned long long int var_15 = 15654459606120280012ULL;
short var_16 = (short)13351;
unsigned long long int var_17 = 15984551432875857296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
