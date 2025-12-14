#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3512018087824742491LL;
unsigned long long int var_7 = 14664556136923791925ULL;
unsigned long long int var_8 = 16255123105587116511ULL;
unsigned long long int var_9 = 16466952452369961824ULL;
unsigned int var_10 = 3968240439U;
int zero = 0;
unsigned int var_13 = 2085497113U;
signed char var_14 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
