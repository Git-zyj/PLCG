#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 785312800357728819LL;
unsigned short var_14 = (unsigned short)24456;
int zero = 0;
unsigned long long int var_20 = 6503038293549888988ULL;
int var_21 = 564437855;
unsigned short var_22 = (unsigned short)15829;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
