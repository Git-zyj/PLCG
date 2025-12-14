#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2762439797U;
unsigned long long int var_5 = 13118787852600932069ULL;
int var_6 = -1542394449;
int var_7 = -1536692753;
unsigned long long int var_9 = 7389342524341805189ULL;
int zero = 0;
unsigned long long int var_10 = 14403365215671559913ULL;
unsigned int var_11 = 2228645391U;
int var_12 = -1851469712;
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
