#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13886;
long long int var_2 = -7790931181439076148LL;
unsigned long long int var_5 = 9853937556222814477ULL;
unsigned long long int var_9 = 17093811027933353213ULL;
int var_11 = 1744435280;
int zero = 0;
short var_12 = (short)31996;
short var_13 = (short)-1735;
void init() {
}

void checksum() {
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
