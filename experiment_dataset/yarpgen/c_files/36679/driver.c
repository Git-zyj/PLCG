#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
unsigned char var_4 = (unsigned char)68;
unsigned int var_6 = 2398652885U;
unsigned long long int var_9 = 16700803516822396962ULL;
int zero = 0;
signed char var_10 = (signed char)-109;
unsigned long long int var_11 = 5429232985504084852ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
