#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20764;
unsigned long long int var_7 = 6036665939527154794ULL;
long long int var_8 = 3049356058650516208LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7679124801247219994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
