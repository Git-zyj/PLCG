#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
long long int var_5 = 3265031603143846147LL;
unsigned long long int var_7 = 17585219216209716653ULL;
int var_11 = 824371559;
long long int var_12 = -5717733768997763430LL;
unsigned int var_13 = 842266101U;
int zero = 0;
long long int var_14 = -5495804583493118140LL;
short var_15 = (short)7037;
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
