#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -815427898233431226LL;
unsigned long long int var_10 = 6797491631331730029ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)45815;
signed char var_19 = (signed char)-66;
short var_20 = (short)22173;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
