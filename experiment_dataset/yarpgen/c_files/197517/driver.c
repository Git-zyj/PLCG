#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -60926524;
_Bool var_1 = (_Bool)0;
long long int var_3 = -7850470326203643975LL;
long long int var_7 = 5226173697713295470LL;
int zero = 0;
long long int var_11 = 4253299157444146588LL;
unsigned short var_12 = (unsigned short)31773;
int var_13 = 696074772;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
