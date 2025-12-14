#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3246618799062192129ULL;
short var_6 = (short)-10068;
short var_8 = (short)-30773;
short var_9 = (short)-23587;
unsigned long long int var_10 = 18039072563561191562ULL;
int zero = 0;
long long int var_11 = -7552966610438942699LL;
unsigned int var_12 = 1071789028U;
unsigned int var_13 = 1714762010U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
