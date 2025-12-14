#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5499409563756804015ULL;
unsigned short var_10 = (unsigned short)64687;
long long int var_11 = -7806736067796014687LL;
int zero = 0;
long long int var_16 = 3744048162222904670LL;
int var_17 = -1593120942;
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
