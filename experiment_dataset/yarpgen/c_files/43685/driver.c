#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 601184712214766938ULL;
unsigned char var_5 = (unsigned char)244;
long long int var_9 = 5208450416642510652LL;
long long int var_11 = 2196918264051342328LL;
int zero = 0;
long long int var_12 = -9117686561383950292LL;
unsigned char var_13 = (unsigned char)222;
void init() {
}

void checksum() {
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
