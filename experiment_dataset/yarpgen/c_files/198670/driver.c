#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4675384415404386853LL;
unsigned long long int var_9 = 746917203692801195ULL;
int var_11 = -484788850;
int zero = 0;
unsigned short var_20 = (unsigned short)50149;
unsigned int var_21 = 2684369998U;
int var_22 = 1742509168;
int var_23 = -1188678937;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
