#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2899;
unsigned long long int var_1 = 940832137575383241ULL;
short var_3 = (short)-19351;
int zero = 0;
int var_11 = -1327961658;
int var_12 = 775681831;
long long int var_13 = -2379964967519016336LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
