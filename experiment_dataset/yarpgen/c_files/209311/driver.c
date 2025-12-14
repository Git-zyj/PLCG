#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-37;
signed char var_12 = (signed char)-77;
unsigned long long int var_13 = 14064752000939849013ULL;
int zero = 0;
unsigned long long int var_17 = 12031001132778579043ULL;
unsigned long long int var_18 = 13986581928711629961ULL;
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
