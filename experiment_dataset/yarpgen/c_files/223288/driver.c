#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
unsigned char var_4 = (unsigned char)112;
unsigned char var_8 = (unsigned char)68;
unsigned long long int var_9 = 4382398628978917346ULL;
unsigned int var_15 = 296635354U;
int zero = 0;
unsigned long long int var_16 = 13853185887837334204ULL;
long long int var_17 = 2737168410382653387LL;
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
