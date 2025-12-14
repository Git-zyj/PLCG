#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2231272847U;
unsigned long long int var_4 = 13699435863776231355ULL;
unsigned int var_5 = 2707103178U;
unsigned int var_7 = 208315108U;
long long int var_8 = 4110039512085892074LL;
long long int var_9 = -2288852670681220028LL;
signed char var_12 = (signed char)-92;
int zero = 0;
long long int var_13 = 1079078155347511067LL;
signed char var_14 = (signed char)-30;
short var_15 = (short)20041;
int var_16 = 397507753;
signed char var_17 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
