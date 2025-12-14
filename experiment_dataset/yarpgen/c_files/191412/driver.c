#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1092561448U;
unsigned char var_3 = (unsigned char)72;
unsigned int var_9 = 1162822086U;
long long int var_11 = -4432181970470314128LL;
int zero = 0;
long long int var_18 = 2137682487987608142LL;
unsigned int var_19 = 2083102037U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
