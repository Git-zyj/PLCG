#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
long long int var_1 = -987211941387825511LL;
unsigned short var_7 = (unsigned short)17209;
unsigned long long int var_8 = 3878592869589161256ULL;
unsigned char var_11 = (unsigned char)16;
long long int var_12 = 8979233091673949652LL;
int zero = 0;
unsigned char var_13 = (unsigned char)208;
int var_14 = 52698181;
unsigned int var_15 = 2884934571U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
