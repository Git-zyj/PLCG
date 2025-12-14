#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7164883309884651022LL;
int var_7 = -952986221;
unsigned long long int var_9 = 7614035252625765909ULL;
int var_14 = -660158126;
unsigned long long int var_19 = 8613092613829749913ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)195;
unsigned long long int var_21 = 12829054133888161306ULL;
signed char var_22 = (signed char)-112;
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
