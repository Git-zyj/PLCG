#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27657;
int var_4 = -1646869407;
int var_8 = 1903816115;
unsigned long long int var_10 = 5436885913776727315ULL;
int zero = 0;
int var_13 = 873456208;
unsigned long long int var_14 = 12047841194221946717ULL;
int var_15 = 841337712;
unsigned long long int var_16 = 366230125499394547ULL;
void init() {
}

void checksum() {
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
