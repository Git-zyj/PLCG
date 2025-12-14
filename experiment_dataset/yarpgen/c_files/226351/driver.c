#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1567449671U;
unsigned short var_10 = (unsigned short)22131;
int zero = 0;
unsigned int var_19 = 1748837530U;
unsigned short var_20 = (unsigned short)47654;
int var_21 = 158494523;
unsigned long long int var_22 = 6008073703345425954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
