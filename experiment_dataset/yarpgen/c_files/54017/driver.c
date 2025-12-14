#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 62742395930133031LL;
short var_3 = (short)-28813;
int var_12 = -982455122;
unsigned long long int var_18 = 7177901787804441655ULL;
int zero = 0;
long long int var_19 = 8238745066461481232LL;
unsigned short var_20 = (unsigned short)53682;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
