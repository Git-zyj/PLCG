#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)-18103;
short var_13 = (short)-10266;
unsigned long long int var_14 = 9526229442201318997ULL;
int zero = 0;
signed char var_18 = (signed char)-121;
short var_19 = (short)-27060;
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
