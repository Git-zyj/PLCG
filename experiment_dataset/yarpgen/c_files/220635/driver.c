#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1205160288U;
unsigned int var_4 = 3459448627U;
int var_7 = -880090706;
unsigned long long int var_16 = 9178835701584350231ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)26;
long long int var_18 = 2569966937555347860LL;
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
