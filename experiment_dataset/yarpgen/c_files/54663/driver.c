#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12249056474342128899ULL;
unsigned long long int var_8 = 16187932114620749411ULL;
unsigned long long int var_15 = 5832022610756915334ULL;
int zero = 0;
unsigned long long int var_17 = 5365404970944225960ULL;
unsigned long long int var_18 = 412365718065918695ULL;
unsigned long long int var_19 = 15559259771908338003ULL;
unsigned long long int var_20 = 12261597294876793394ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
