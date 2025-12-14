#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)3;
int var_9 = -708350296;
short var_10 = (short)23818;
unsigned long long int var_11 = 15747500453575211251ULL;
int zero = 0;
unsigned long long int var_16 = 409706723029053254ULL;
int var_17 = -1364692487;
unsigned long long int var_18 = 12541316633028366755ULL;
short var_19 = (short)19201;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
