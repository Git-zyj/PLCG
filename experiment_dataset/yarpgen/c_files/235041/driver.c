#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 602928425;
unsigned short var_8 = (unsigned short)45665;
unsigned long long int var_9 = 12587377242088197918ULL;
int zero = 0;
int var_16 = -1370867394;
unsigned short var_17 = (unsigned short)30630;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
