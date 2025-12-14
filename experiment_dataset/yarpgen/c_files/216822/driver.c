#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9607075443562229784ULL;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
unsigned long long int var_16 = 596354094778390512ULL;
unsigned long long int var_17 = 4144184550858536256ULL;
int var_18 = -1706076043;
void init() {
}

void checksum() {
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
