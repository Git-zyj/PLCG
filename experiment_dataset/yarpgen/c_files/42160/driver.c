#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4480934761187137649LL;
unsigned char var_9 = (unsigned char)93;
unsigned long long int var_12 = 8100017375545877118ULL;
int zero = 0;
signed char var_14 = (signed char)-16;
unsigned long long int var_15 = 11886626352093658548ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
