#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2223402932073235455ULL;
int zero = 0;
unsigned long long int var_12 = 12840351093818321036ULL;
unsigned long long int var_13 = 10250029547026718703ULL;
unsigned long long int var_14 = 12569244989224291261ULL;
unsigned long long int var_15 = 12494159252692507105ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
