#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3909227948486692555ULL;
unsigned long long int var_5 = 2864466072095466854ULL;
long long int var_7 = -4129460769583865717LL;
long long int var_11 = -1773323052344473799LL;
int zero = 0;
unsigned short var_20 = (unsigned short)9851;
short var_21 = (short)23524;
short var_22 = (short)26414;
void init() {
}

void checksum() {
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
