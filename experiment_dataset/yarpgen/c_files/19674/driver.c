#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7182972394085033522LL;
unsigned long long int var_1 = 8010874543448513303ULL;
unsigned long long int var_2 = 918522823760459463ULL;
int var_7 = -978601450;
int var_9 = 1887188795;
long long int var_13 = -2804103568947543029LL;
int zero = 0;
long long int var_14 = -2639620758555143821LL;
long long int var_15 = -2491166262909528136LL;
void init() {
}

void checksum() {
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
