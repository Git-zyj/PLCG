#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
signed char var_3 = (signed char)57;
signed char var_5 = (signed char)-41;
unsigned long long int var_9 = 16798234149040319186ULL;
int var_13 = 361804452;
int zero = 0;
unsigned char var_18 = (unsigned char)77;
unsigned char var_19 = (unsigned char)167;
signed char var_20 = (signed char)-8;
void init() {
}

void checksum() {
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
