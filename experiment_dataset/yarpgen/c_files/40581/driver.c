#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1396347009;
unsigned long long int var_5 = 13010503860419503156ULL;
long long int var_16 = -3866989297856717528LL;
int zero = 0;
int var_20 = -1695768517;
unsigned char var_21 = (unsigned char)61;
long long int var_22 = 6654922321692858595LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
