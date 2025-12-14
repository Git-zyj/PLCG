#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11921555002928319680ULL;
unsigned long long int var_3 = 6539549000158501655ULL;
unsigned long long int var_5 = 13982263460067287008ULL;
unsigned long long int var_7 = 3629756543932035356ULL;
unsigned long long int var_10 = 14647927740810228040ULL;
unsigned long long int var_12 = 17110379747095117231ULL;
int zero = 0;
unsigned long long int var_13 = 14615992405118714626ULL;
unsigned long long int var_14 = 5483161519740131604ULL;
unsigned long long int var_15 = 8061287897441020660ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
