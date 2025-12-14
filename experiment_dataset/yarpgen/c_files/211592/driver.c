#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-57;
long long int var_15 = 150179447833043317LL;
long long int var_16 = -4463136546909779958LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)57;
unsigned int var_19 = 1549333607U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
