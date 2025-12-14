#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 691832190439155911LL;
long long int var_8 = -3138039154693848913LL;
int var_10 = -1157822296;
int zero = 0;
int var_19 = 1688844740;
unsigned long long int var_20 = 697820107924052856ULL;
void init() {
}

void checksum() {
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
