#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1291015133223383974LL;
unsigned int var_4 = 3268731012U;
long long int var_7 = -4883376243471023921LL;
int zero = 0;
unsigned int var_15 = 3264032122U;
long long int var_16 = -7963641253382921761LL;
void init() {
}

void checksum() {
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
