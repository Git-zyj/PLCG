#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 452405326;
long long int var_10 = 3019477442010029981LL;
int var_12 = -179272694;
int zero = 0;
unsigned short var_17 = (unsigned short)43439;
unsigned short var_18 = (unsigned short)58299;
unsigned long long int var_19 = 9480587495337771157ULL;
unsigned long long int var_20 = 7596592733114981411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
