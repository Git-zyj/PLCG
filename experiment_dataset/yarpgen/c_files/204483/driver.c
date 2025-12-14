#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned int var_1 = 815150053U;
unsigned int var_2 = 4245009841U;
unsigned char var_6 = (unsigned char)102;
unsigned long long int var_7 = 1633680325289644735ULL;
unsigned char var_8 = (unsigned char)5;
int zero = 0;
unsigned int var_10 = 2781751063U;
unsigned long long int var_11 = 2823401994097677632ULL;
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
