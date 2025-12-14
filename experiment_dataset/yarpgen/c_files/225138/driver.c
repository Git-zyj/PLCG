#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
unsigned long long int var_1 = 5713482193922836204ULL;
short var_3 = (short)-25017;
int var_9 = 1537110881;
int zero = 0;
unsigned long long int var_15 = 17452894954412903501ULL;
int var_16 = 1307362247;
unsigned long long int var_17 = 1279088603216122380ULL;
void init() {
}

void checksum() {
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
