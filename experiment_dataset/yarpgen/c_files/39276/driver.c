#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24025;
int var_4 = -1294221789;
int var_7 = -1372152150;
long long int var_9 = 5626113878887769418LL;
int zero = 0;
long long int var_10 = -5768778450971048179LL;
short var_11 = (short)9148;
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
