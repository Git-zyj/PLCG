#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3840821094U;
unsigned char var_3 = (unsigned char)181;
unsigned short var_4 = (unsigned short)28489;
int zero = 0;
short var_10 = (short)-18249;
long long int var_11 = -3098343714142150436LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
