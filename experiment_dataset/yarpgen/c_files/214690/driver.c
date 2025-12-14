#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10640663323736175328ULL;
unsigned long long int var_4 = 10820750007338412155ULL;
unsigned long long int var_5 = 7186353248567100054ULL;
int zero = 0;
unsigned long long int var_10 = 15372824129158062495ULL;
unsigned int var_11 = 673576352U;
unsigned long long int var_12 = 3763916839598403356ULL;
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
