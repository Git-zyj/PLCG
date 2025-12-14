#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-63;
unsigned char var_5 = (unsigned char)41;
unsigned int var_7 = 3546538850U;
signed char var_9 = (signed char)-25;
unsigned long long int var_10 = 4391667993317082488ULL;
int zero = 0;
signed char var_19 = (signed char)121;
int var_20 = -307839448;
unsigned int var_21 = 3084912547U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
