#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -3439952051745804947LL;
unsigned long long int var_10 = 14708290472123463011ULL;
unsigned short var_12 = (unsigned short)29512;
int zero = 0;
unsigned char var_14 = (unsigned char)121;
int var_15 = -1916137215;
unsigned char var_16 = (unsigned char)163;
void init() {
}

void checksum() {
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
