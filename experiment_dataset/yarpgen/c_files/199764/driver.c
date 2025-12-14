#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5399808829369245067LL;
unsigned long long int var_3 = 16252411888078753475ULL;
long long int var_6 = 4765483338979873737LL;
short var_7 = (short)-4294;
int zero = 0;
unsigned long long int var_11 = 15116736278006497319ULL;
unsigned long long int var_12 = 6252869195419521560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
