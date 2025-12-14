#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -1356849466;
long long int var_8 = 3296376082022022080LL;
long long int var_10 = -1212889336231076704LL;
int zero = 0;
short var_13 = (short)-8807;
int var_14 = -1506807846;
unsigned long long int var_15 = 73934230910159429ULL;
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
