#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17329519849528098764ULL;
int var_3 = -977554798;
unsigned char var_7 = (unsigned char)149;
int var_9 = -1104481124;
int zero = 0;
unsigned long long int var_14 = 4588137828497453091ULL;
unsigned long long int var_15 = 16243656957807964537ULL;
unsigned char var_16 = (unsigned char)251;
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
