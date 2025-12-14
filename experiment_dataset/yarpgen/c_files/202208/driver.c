#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15997213822372992815ULL;
long long int var_3 = 4163772529451760438LL;
int var_7 = 1882731706;
int zero = 0;
unsigned long long int var_14 = 12815836393903221044ULL;
short var_15 = (short)-14889;
void init() {
}

void checksum() {
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
