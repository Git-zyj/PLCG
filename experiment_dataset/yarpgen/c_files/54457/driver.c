#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2226809480U;
unsigned int var_3 = 4107839765U;
unsigned int var_5 = 3213853673U;
unsigned long long int var_9 = 11992085154085177673ULL;
int zero = 0;
int var_10 = -527940905;
unsigned long long int var_11 = 1054205949807694262ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
