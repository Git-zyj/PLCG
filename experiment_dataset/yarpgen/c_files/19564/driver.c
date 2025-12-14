#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15407374670513599153ULL;
unsigned long long int var_2 = 10415903992242405511ULL;
unsigned long long int var_10 = 4594983043316015327ULL;
int zero = 0;
unsigned long long int var_18 = 15156235232788143513ULL;
unsigned long long int var_19 = 11333276664851716337ULL;
unsigned long long int var_20 = 7118359203206450976ULL;
void init() {
}

void checksum() {
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
