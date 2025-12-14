#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7561659119187958769LL;
unsigned int var_6 = 838620147U;
unsigned short var_9 = (unsigned short)65001;
unsigned short var_11 = (unsigned short)1741;
int zero = 0;
unsigned long long int var_13 = 13805380228546388967ULL;
unsigned int var_14 = 2740928369U;
unsigned long long int var_15 = 2192604225615656960ULL;
int var_16 = 779774264;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
