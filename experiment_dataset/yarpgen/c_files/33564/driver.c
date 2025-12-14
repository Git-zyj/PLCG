#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
unsigned long long int var_4 = 3916347754514489968ULL;
int var_5 = 1326648033;
signed char var_6 = (signed char)18;
int zero = 0;
int var_11 = -1675712700;
int var_12 = 52847873;
void init() {
}

void checksum() {
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
