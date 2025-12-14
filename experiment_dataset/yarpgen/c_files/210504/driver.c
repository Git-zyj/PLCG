#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13985766855970235728ULL;
unsigned long long int var_2 = 12530458312724950731ULL;
unsigned int var_3 = 347414119U;
unsigned int var_4 = 1461205367U;
short var_5 = (short)-22329;
short var_7 = (short)-4418;
unsigned int var_8 = 1892842107U;
unsigned long long int var_9 = 16606619973209280549ULL;
unsigned long long int var_10 = 4565411369792277272ULL;
int zero = 0;
int var_16 = 2117221468;
unsigned int var_17 = 1939925099U;
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
