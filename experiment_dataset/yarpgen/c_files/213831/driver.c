#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3165660753862189791LL;
int zero = 0;
unsigned short var_12 = (unsigned short)58671;
int var_13 = -981698661;
long long int var_14 = 7832024775148052475LL;
long long int var_15 = 1223039963753855987LL;
long long int var_16 = 6816285265207142282LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
