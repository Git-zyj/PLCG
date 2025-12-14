#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2359842308632379360LL;
short var_5 = (short)-22596;
long long int var_6 = -286081017085223089LL;
int var_7 = -173494183;
int var_9 = -806997739;
int zero = 0;
int var_14 = 2072176013;
unsigned long long int var_15 = 17835778408877939482ULL;
long long int var_16 = 2924014563270689509LL;
unsigned long long int var_17 = 4508691721535387613ULL;
unsigned long long int var_18 = 15168393771231849004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
