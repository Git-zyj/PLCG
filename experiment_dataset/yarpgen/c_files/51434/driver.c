#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3138705819629156964LL;
unsigned char var_9 = (unsigned char)44;
unsigned long long int var_12 = 10356118428895949119ULL;
int zero = 0;
long long int var_13 = -8832495239711450888LL;
unsigned long long int var_14 = 17817547803947793764ULL;
unsigned char var_15 = (unsigned char)150;
long long int var_16 = -5073371369711914032LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
